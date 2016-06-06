/*
 * File:   main.cpp
 * Author: Edgar Salas
 * purpose: calculate the volume of a sphere 
 * Created on March 14, 2016, 9:45 AM
 */
//System libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constant
 const float pi=3.14159265359;
//Function Prototypes 

// Execution Begins Here:

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables 
    float volume,
          radius,
          r3;   //radius of the sphere cubed
          
    cout<<"Input the radius of the sphere to get its volume "<<endl;
            cin>>radius; 
   //Map the inputs to the 
     r3=radius*radius*radius;       
     volume=((static_cast<float>(4.0/3.0))*pi*r3);
    //Output the results 
   cout<<"The volume of the sphere is "<<volume<<endl;
    
    //Exit Stage Right!
    return 0;
}