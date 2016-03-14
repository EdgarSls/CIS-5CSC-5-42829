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
 {   // Declare Varibles
     int time,
         dtnc; // distance the object has fallen    
     // prompt user to enter time 
     cout<< "Enter the amount of time the object has fallen and press enter" <<endl;
     cin>> time;
     dtnc = ((time * time ) * 32 )/2;
     // output the distance
     cout<< "The total distance the object has fallen is ";
     cout<<dtnc;
     cout<<" feet "<<endl;
 return 0;}