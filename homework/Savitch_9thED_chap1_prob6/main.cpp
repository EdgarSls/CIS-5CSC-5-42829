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
 {
     //Declare varible
     int frstnm,  // first number
         scdnm,   // second number
         prd,     // Product  
         sum;
     cout << "Press enter after entering numbers" <<endl;
     cout << "Enter First number " <<endl;
     cin >> frstnm;
     cout << "Enter Second number" <<endl;
     cin >> scdnm;
     sum = frstnm + scdnm; 
     prd = frstnm * scdnm;
     cout << "The sum of these numbers is ";
     cout << sum <<endl;
     cout << "The product of these numbers is ";
     cout << prd <<endl;
     return 0; }