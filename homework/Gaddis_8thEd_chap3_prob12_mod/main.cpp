/* 
 * File:   main.cpp
 * Author: Edgar Salas
 * Purposes: to convert fa
 * Created on March 9, 2016, 10:09 AM
 */


//System libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constant

//Function Prototypes 

// Execution Begins Here:

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables 
    float f,
          f1=32,
          f2=212,
          c,
          c0,  
          c1=0,
          c2=100,
          f3= 5.0f/9;
    //Initialize variables
    cout<<"type in the temperature in fahrenheit"<<endl;
    cin>>f;
            
    //Map the inputs to the outputs
    c=f3*(f-32);
    c0=c1+(c2-c1)*(f-f1)/(f2-f1);        
    //Output the results 
    cout<<"the temperature in celsius is "<<c<<""<<endl;
    cout<<"the temperature in celsius is "<<c0<<""<<endl;
    //Exit Stage Right!
    return 0;
}
