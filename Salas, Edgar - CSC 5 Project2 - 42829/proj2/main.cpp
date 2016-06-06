/*
  * File:   main.cpp
 * Author: Edgar Salas
 * purpose : Second project demonstrate all the constructs we have learned so far
 * Created on May 16, 2016, 
 
 */

#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<ctype.h>
#include<fstream>
#include<string>
#include<cmath>
#include<windows.h>
#include<ctime>
using namespace std;
int win(float & ,float ,float, float &);
int losem(float & ,float ,float, float &);
int board();
int sort (int & , int &);
int randarray(int [][50] );
int sortarray(int [][50] );
int prntarray(int [][50] );
int randspin(int [][50]);

int main(){ 
    ofstream out;//Output file
    ifstream in; //Input file

              
    int    spin,
            strt,
            bettype=1,
            column=1,
            row,
            chip10,
            chip5,
            chip1,
            dozens,
            lineh,
            linev,
            corner;
    
    bool gmOver=false,
            bett=false,
            lose;
            
    float money=100,
            winning=0, 
            bet,
            bet2,
            account=0;
    unsigned short 
     
            square=1,
            ttlose=0,
            ttlwin=0;       
     const unsigned short 
            height=13,
             width=4;
     
           
    char evenodd,
            playag;
    string name;
 
  
  
  ifstream file;
  in.open ("title.txt");
  in>>square;

    cout<<setprecision(2)<< fixed;
    cout<<"GAME OF ROULETTE"<<endl;
    srand (time(NULL));
    const int limit=50;
    int num=1;
    int board [limit][limit];
    int index [limit];
  
   
     cout<<endl;
for (int i=0; i<12;i++)
    {
        for (int j=0;j<3;j++)
        {
            board[i][j]=num++;
        }
       
     }

randarray(board);
sortarray(board);
prntarray(board);

  
    cout<<endl;
    cout<<endl;
    cout<<"Enter Your name "<<endl;
    getline(cin, name);
    cout<<"Hello "<<name<<endl;
    cout<<"Your current amount of gambling is "<<money<<" dollars"<<endl;
    cout<<"Types of betting "<<endl;
    cout<<"Straight bet press 1 payout is 35 to 1 odds "<<endl;
    cout<<"Low bet (1-18) press 2 payout is 1 to 1 odds "<<endl;
    cout<<"High bet (19-36) press 3 payout is 1 to 1 odds "<<endl;
    cout<<"Odd Even bet press 4 payout is 1 to 1 odds "<<endl;
    cout<<"Column bet press 5 payout is 2 to 1 odds "<<endl;
    cout<<"Row bet (str bet)  press 6 payout is 11 to 1 odds "<<endl;
    cout<<"Dozens bet (1-12)(13-24)(25-26) press 7 payout is 2 to 1 odds "<<endl;
    cout<<"Line bet horizontal press 8 payout is 17 to 1 odds "<<endl;
    cout<<"Line bet vertical press 9 payout is 17 to 1 odds "<<endl;       
    cout<<"Corner bet press 10 payout is 8 to 1"<<endl;
    cout<<"The chip denominations are 10 , 5 , 1 "<<endl;
    cout<<"Table min bet is 1 dollar and all bets are in 1 dollar increments table max is whatever you have in gambling money"<<endl;
    
    do{
      
    while(bett!=true){
        
        spin=randspin(board);
       
      cout<<"Enter the chips you want to bet first the 10s then 5s and 1s enter any thing else besides a valid bet to QUIT the game"<<endl;
      cout<<"For testing the game the dealer gets "<<spin<<endl;
      cout<<"10s chips ";
      cin>>chip10;
      cout<<"5s chips ";
      cin>>chip5;
      cout<<"1s chips ";
      cin>>chip1;
      if(!isdigit(chip10)&&!isdigit(chip5)&&!isdigit(chip1) )
      {bet=(chip1*1)+(chip5*5)+(chip10*10);}
     
      if(bet<=money){
      
       do{ 
           cout<<"Now enter the type of bet you want to place"<<endl;
      cin>>bettype;
          if (bettype<!10||bettype>10) cout<<"You didn't enter a valid bet"<<endl; 
            }
        while(bettype<!10||bettype>10);
        
        bet2=bet;
                
       switch(bettype){
           
           //straight bet  35 to 1 odds
          case 1: 
            
              cout<<"Enter the number you want to place a bet on "<<endl;
          cin>>strt;
          if(!isdigit(strt)&&strt<=36){
       
          if(strt==spin){
          winning=bet*=35;
          cout<<"win"<<endl; 
          lose=false;}
          else if (!(strt==spin)){
          cout<<"lose"<<endl; lose=true; 
            }      
          break;}
          else{return 0;}
          //low bet 1 to 1 odds
          case 2 : if (spin>=19)
           {  cout<<"lose"<<endl; lose=true; 
            }
          else if (spin>=1&&spin<=18){
          cout<<"win"<<endl;
              winning=bet*=2;
              lose=false;
            }
          break;
          
          //high bet 1 to 1 odds
           case 3: if (spin<=18)
          {     cout<<"lose"<<endl; lose=true; 
           }
           else if (spin>=19&&spin<=36){
               cout<<"win"<<endl;
              winning=bet*=2;
              lose=false;}
           break;
          
           //odd even bet 1 to 1 odds
           case 4: cout<<"Enter E for Even and O Odd"<<endl; 
              cin>>evenodd;
              if(!(evenodd=='e'||evenodd=='o')){return 0;}
              toupper(evenodd);
           if (evenodd=='e'){
               if ( spin% 2== 0 ){
            cout<<"win"<<endl;
              winning=bet*=2;
           lose=false;}
                    
               else if (spin%2==1){
                cout<<"lose"<<endl; lose=true; 
              }
           }
           if (evenodd=='o'){
               if ( spin% 2== 0 ){
             cout<<"lose"<<endl; lose=true; 
            }
                    
               else if (spin%2==1){
               cout<<"win"<<endl;
              winning=bet*=2;
               lose=false;}
           }
           break;
           
           //column bet 2 to 1 odds 
        
           case 5:cout<<"Enter the column number"<<endl;       
           cin>>column;
            if(!isdigit(column)&&column<=3){
           switch (column) {
               case 1:if (spin%3==1){
                cout<<"win"<<endl;
             winning=bet*=3;
               lose=false;}
               else if (spin%3!=1){
                cout<<"lose"<<endl; lose=true; 
               
               }
               break;
               case 2: if (spin%3==2){
                 cout<<"win"<<endl;
              winning=bet*=3;
              lose=false; }
               else if (spin%3!=2){
               cout<<"lose"<<endl; lose=true; 
              
               }
               break;
               case 3: if (spin%3==0){
                cout<<"win"<<endl;
              winning=bet*=3;
              lose=false; }
               else if (spin%3!=0){
               cout<<"lose"<<endl; lose=true; 
       }
               break;
           }
           break;}
            else {return 0;}
           
           //row bet 11 to 1 odds
           case 6 : cout<<"Enter the row number (street bet)"<<endl;
               cin>>row;
           if(!isdigit(row)&&row<=12){    
           switch(row ){
               case 1:if (spin==1||spin==2||spin==3){
                  cout<<"win"<<endl;
              winning=bet*=12;
             lose=false;  }
               else if (!(spin==1||spin==2||spin==3)){
               cout<<"lose"<<endl; lose=true; 
               }
               break;
               case 2:if (spin==4||spin==5||spin==6){
                  cout<<"win"<<endl;
              winning=bet*=12;
              lose=false; } 
               else if (!(spin==4||spin==5||spin==6)){
               cout<<"lose"<<endl; lose=true;           
               }
               break;
               case 3:if (spin==7||spin==8||spin==9){
                  cout<<"win"<<endl;
              winning=bet*=12;
              lose=false; } 
               else if (!(spin==7||spin==8||spin==9)){
               cout<<"lose"<<endl; lose=true; 
               }
               break;
               case 4:if (spin==10||spin==11||spin==12){
                  cout<<"win"<<endl;
              winning=bet*=12;
              lose=false; }
               else if (!(spin==10||spin==11||spin==12)){
               cout<<"lose"<<endl; lose=true; 
              }
               break;
               case 5:if (spin==13||spin==14||spin==15){
                  cout<<"win"<<endl;
              winning=bet*=12;
              lose=false; }
               else if (!(spin==13||spin==14||spin==15)){
               cout<<"lose"<<endl; lose=true; 
               }
               break;
               case 6:if (spin==16||spin==17||spin==18){
                  cout<<"win"<<endl;
              winning=bet*=12;
               lose=false;}
               else if (!(spin==16||spin==17||spin==18)){
               cout<<"lose"<<endl; lose=true; 
               }
               break;
               case 7:if (spin==19||spin==20||spin==21){
                  cout<<"win"<<endl;
              winning=bet*=12;
              lose=false; }
               else if (!(spin==19||spin==20||spin==21)){
               cout<<"lose"<<endl; lose=true; 
               }
               break;
               case 8:if (spin==22||spin==23||spin==24){
                  cout<<"win"<<endl;
              winning=bet*=12;
               lose=false;}
               else if (!(spin==22||spin==23||spin==24)){
               cout<<"lose"<<endl; lose=true; 
               }
               break;
               case 9:if (spin==25||spin==26||spin==27){
                  cout<<"win"<<endl;
              winning=bet*=12;
               lose=false;}
               else if (!(spin==25||spin==26||spin==27)){
               cout<<"lose"<<endl; lose=true; 
               }
               break;
               case 10:if (spin==28||spin==29||spin==30){
                  cout<<"win"<<endl;
              winning=bet*=12;
               lose=false;} else if (!(spin==28||spin==29||spin==30)){
               cout<<"lose"<<endl; lose=true; 
               }
               break;
               case 11:if (spin==31||spin==33||spin==34){
                  cout<<"win"<<endl;
              winning=bet*=12;
               lose=false;}
               else if (!(spin==31||spin==33||spin==34)){
               cout<<"lose"<<endl; lose=true; 
               }
               break;
               case 12:if (spin==34||spin==35||spin==36){
                  cout<<"win"<<endl;
              winning=bet*=12;
                lose=false;}
               else if (!(spin==34||spin==35||spin==36)){
               cout<<"lose"<<endl; lose=true; 
               }
               break;
                 }
           break;}
           else {return 0;}
           
           //dozens bet 2 to 1 odds
           case 7:cout<<"Enter the dozens number you want to bet on 1=(1-12) 2=(13-24) 3(25-36)"<<endl;
               cin>>dozens; 
               if(!isdigit(dozens)&&dozens<=3){
           switch (dozens){
               case 1: if (spin>=1&&spin<=12){
                cout<<"win"<<endl;
              winning=bet*=3;
                lose=false;}
               else if (!(spin>=1&&spin<=12)){
                cout<<"lose"<<endl; lose=true; 
               }
               break;
               case 2: if (spin>=13&&spin<=24){
                cout<<"win"<<endl;
              winning=bet*=3;
                lose=false;}
               else if (!(spin>=13&&spin<=24)){
                cout<<"lose"<<endl; lose=true; 
               }
               break;
               case 3: if (spin>=24&&spin<=36){
                cout<<"win"<<endl;
              winning=bet*=3;
              lose=false;  }
               else if (!(spin>=24&&spin<=36)){
                cout<<"lose"<<endl; lose=true; 
              }
               break;
               
           }
           break;}
               else{return 0;}
               
           //line bet horizontal     
           case 8:cout<<"Enter the line bet you want to bet on ex chose 1 and line is 1 and 4"<<endl;
           cin>>lineh;
         if(!isdigit(lineh)&&lineh<=33){
             if(spin==lineh||spin==lineh+3){
           winning=bet*=17;
          cout<<"win"<<endl; 
          lose=false;}
          else if (!(spin==lineh||spin==lineh+3)){
          cout<<"lose"<<endl; lose=true; 
            }      
            break;}
          else{return 0;}
           //line bet vertical
           case 9:cout<<"Enter the line bet you want to bet on ex chose 1 and line is 1 and 2"<<endl;
           cin>>linev;
            if(!isdigit(linev)&&linev<=35){
             if(spin==linev||spin==linev+1){
           winning=bet*=17;
          cout<<"win"<<endl; 
          lose=false;}
          else if (!(spin==linev||spin==linev+1)){
          cout<<"lose"<<endl; lose=true; 
            }      
            break;}
          else{return 0;}
       
           //corner bet 
             case 10:cout<<"Enter the corner bet you want to bet on ex(chose on 1 and bet is 1 ,2 ,4,5 )"<<endl;
           cin>>corner;
            if(!isdigit(corner)&&corner<=35){
             if(spin==corner||spin==corner+1||spin==corner+3||spin==corner+4){
           winning=bet*=17;
          cout<<"win"<<endl; 
          lose=false;}
          else if (!(spin==corner||spin==corner+1||spin==corner+3||spin==corner+4)){
          cout<<"lose"<<endl; lose=true; 
            }      
            break;}
          else{return 0;}
       default : cout<<"you didn't pick a bet "<<endl; return 0;
       break;
       } 
       
        cout<<"The dealer got "<<spin<<endl;
        (lose!=true)? (win(money, bet, bet2, account)):(losem(money, bet, bet2, account));
       
      
      cout<<"Your current total of gambling money is "<<account<<" dollar "<<endl; 
      
     
       if (account<=0){cout<<"You are  out of money "<<endl; bett=true;} 
       else {
      cout<<"Do you want to bet again ?(Y/N)"<<endl;
        cin>>playag;
    toupper(playag); 
      if (playag=='n'){bett=true;}}
      } else {return 0;}
    }
        gmOver=true;
    }
    while(gmOver!=true);   
      out.open("statistics.dat",ios::app);
      out<<endl;
    out<<"Player : "<<name<<endl; 
    out<<"Your total winnings were "<<money<<" dollars"<<endl;
    out<<"You won a total of "<<ttlwin<<" times"<<endl;
    out<<"You lost a total of "<<ttlose<<" times"<<endl;
    out<<"You bet a total of "<<ttlwin+ttlose<<endl;
    out.close();
    in.close();
    
    return 0;
}



int win(float &money, float bet , float bet2, float &account ){
money+=bet; account=money-=bet2;
int ttlwin;ttlwin++;
cout<<"Your winnings were "<<bet<<" dollars"<<endl;

}
    
    
int losem(float &money, float bet , float bet2, float &account){
account=money-=bet2; 
int ttlose;ttlose++; 
cout<<"You lost "<<bet2<<" dollars"<<endl;


}

int board(){
   srand (time(NULL));
    const int limit=50;
    int num=1;
    int board [limit][limit];
    int index [limit];
  
   
     cout<<endl;
for (int i=0; i<12;i++)
    {
        for (int j=0;j<3;j++)
        {
            board[i][j]=num++;
            
        }
       
     }

randarray(board);
sortarray(board);
prntarray(board);
randspin(board);
}

int randarray(int board[][50]){
for (int i=0; i<12;i++)
    {
        for (int j=0;j<3;j++)
        {
               int row=rand()%2;
    int column=rand()%11;
    int temp=board[i][j];
            board[i][j]=board[column][row];
            board[column][row]=temp;
           
        }
       
     }
}
int sortarray(int board[][50]){
    
    
  for (int k = 0; k < 12; k++)
    {
        for (int m = 0; m < 3; m++)
        {
           int  x = m+1;
            for (int i = k; i < 12 ; i++)
            {
                for (int j = x; j < 3; j++)
                {
                    if (board [k][m] > board [i][j])
                        sort(board [k][m] ,board [i][j]);
                }
                x=0;
            } 
        }
  }
 
}


int prntarray(int board[][50]) {
    int num1 = 1;
 
    cout << setw(19) << 1 << setw(6) << 2 << setw(6) << 3 << endl;
    cout << setw(32) << "columns bet " << endl;
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 3; j++) {

            
            if (j == 0) {
                cout << setw(5) << num1++ << setw(8) << "str bet";
           }
            
                cout << setw(6) << board[i][j];

            }
 cout << endl;
        }
       

    }




int randspin(int board[][50]){
 int row1=rand()%2;
    int column1=rand()%11;
     int spin;
    for (int i=0; i<12;i++)
    {
        for (int j=0;j<3;j++)
        {
            if(board[i][j]==board[column1][row1]){
           spin=board[column1][row1];}
        }
       
     }return spin;
    }
int sort (int &x , int &y)
{
    int temp = x ;
    x = y ;
    y = temp ;
}
