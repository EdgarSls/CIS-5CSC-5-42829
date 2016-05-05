/*
  * File:   main.cpp
 * Author: Edgar Salas
 * purpose : demonstrate all the constructs we have learned so far
 * Created on May 4, 2016, 
 
 */
#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    bool gmOver= false;
            
    int spin=20,
            bettype,
    amount,
            money=100,
            column;
            
    char evenodd;
    
    while (!gmOver){
      //spin=rand()%35+1;
      cout<<spin<<endl;
      cin>>bettype;
     
     
       switch(bettype){
           //straight bet  35 to 1 odds
          case 1: cin>>amount;
          if(amount==spin){
          money*=35;
          cout<<"win"<<endl; }
          else if (amount!=spin){
          cout<<"lose"<<endl;
              money/=35;
          }      
          break;
          
          //low bet 1 to 1 odds
          case 2: if (spin>=19)
           {  cout<<"lose"<<endl;
              money/=2;
             
           }
          else if (spin>=1&&spin<=18){
            
          cout<<"win"<<endl;
              money*=2;
              
              }
          break;
          
          //high bet 1 to 1 odds
           case 3: if (spin<=18)
          {
               cout<<"lose"<<endl;
              money/=2;
           }
           else if (spin>=19&&spin<=36){
               cout<<"win"<<endl;
              money*=2;
              }
           break;
          
           //odd even bet 1 to 1 odds
           case 4: cin>>evenodd;
           if (evenodd=='e'){
               if ( spin% 2== 0 ){
            cout<<"win"<<endl;
              money*=2;
           }
                    
               else if (spin%2==1){
                cout<<"lose"<<endl;
              money/=2;
               }
           }
           if (evenodd=='o'){
               if ( spin% 2== 0 ){
             cout<<"lose"<<endl;
              money/=2;
           }
                    
               else if (spin%2==1){
               cout<<"win"<<endl;
              money*=2;
               }
           }
           break;
           
           //columun bet 2 to 1 odds 
           case 5:cin>>column;
           if (spin%3==1) {}
       }
      cout<<money<<endl;
      gmOver=true;
    }
    
}