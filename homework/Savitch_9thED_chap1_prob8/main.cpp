/* 
 * File:   main.cpp
 * Author: Edgar Salas
 * Homework
 * Created on February 26, 2016, 9:45 AM
 */
//System libraries
 #include <iostream>
 using namespace std;
 int main( )
 {   // declare Varibles
     int quarter, 
         dime,
         nickel,
         total,    // sum total of coins 
         qrttl,    //total of quarters
         dmttl,    //total of dimes 
         ncklttl;  //total of nickels
     // prompt user to in put amount of coin
     cout<< "Enter the amounts of each coin"<<endl;
     cout<< "quarters"<<endl;
     cin>> quarter;
     cout<< "dimes"<<endl;
     cin>> dime;
     cout<<"nickel"<<endl;
     cin>> nickel;
    //calculation to compute coin values
     qrttl = 25 * quarter;
     dmttl = 10 * dime;
     ncklttl = 5 * nickel;
     //sum of individual coins 
     total = qrttl + dmttl + ncklttl;
     cout<<"the sum total of the coin is "; 
             cout<<total<<endl;
            
return 0;} 