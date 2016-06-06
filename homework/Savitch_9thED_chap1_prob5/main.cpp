/* 
 * File:   main.cpp
 * Author: Edgar Salas
 * first program 
 * Created on February 17, 2016, 9:45 AM
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
int main() {
    //Declare variables 
      int width,
          length, 
          perimtr; 
    //Initialize variables
      cout<< "Press enter after entering a number" <<endl;
      cout<< "Enter length of the rectangle" <<endl;
      cin >> length;
      cout<< "Enter the width of the rectangle"<<endl;
      cin >> width;
      perimtr = (width +length) *2 ;
      cout<< "The total length of fence required is "; 
      cout<< perimtr <<endl;
              
    return 0;
}