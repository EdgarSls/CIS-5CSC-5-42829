/* 
 * File:   main.cpp
 * Author: Edgar Salas
 * Purpose: to calculate number of cereal boxes needed to make one metric tonne 
 * Created on February 17, 2016, 9:45 AM
 */
//System libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constant
const float tonne=35273.92; //ounces in a tonne
//Function Prototypes 

// Execution Begins Here:

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables 
    float weightt, //weight of cereal in tonnes
          boxw,    //weight of the box in ounces
          boxttl;  //total amount of boxes to yield a metric tonne 
    //user input
    cout<<"Enter the weight of the cereal box in ounces"<<endl;
    cin>>boxw;
    //Map the inputs to the outputs
    weightt=boxw/tonne;
    boxttl=tonne/boxw;       
    //Output the results 
    cout<<"The weight of the box in metric tonnes is "<<weightt<<endl;
    cout<<"and the amount of boxes to yield one metric tonne is "<<boxttl<<endl;
    //Exit Stage Right!
    return 0;
}