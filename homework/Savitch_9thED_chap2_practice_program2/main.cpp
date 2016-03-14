/* 
 * File:   main.cpp
 * Author: Edgar Salas
 * Purpose: Process babylonian
 * Created on March 9, 2016, 8:04 AM
 */

#include <iostream>
#include <cmath>
using namespace std;


int main(int argc, char** argv) {
    //Declare variables
    float n,r,guess;
    
    //input our number to square root 
    cout<<"What number would you like to find the square root of?"<<endl;
    cin>>n;
    
    //calculate the first approximation
    guess=n/2;
    r=n/guess;
    guess=(guess+r)/2;
    cout<<"First approximation = square root ("<<n<<") = r("<<r<<"),guess ("<<guess<<")"<<endl;
   
    //calculate the second approximation 
    r=n/guess;
    guess=(guess+r)/2;
    cout<<"Second approximation = square root ("<<n<<") = r("<<r<<"),guess ("<<guess<<")"<<endl;
    
    //calculate the third approximation
     r=n/guess;
    guess=(guess+r)/2;
    cout<<"Third approximation = square root ("<<n<<") = r("<<r<<"),guess ("<<guess<<")"<<endl;
    
    //calculate the Fourth approximation
     r=n/guess;
    guess=(guess+r)/2;
    cout<<"Fourth approximation = square root ("<<n<<") = r("<<r<<"),guess ("<<guess<<")"<<endl;
    
    //calculate the Fifth approximation 
    r=n/guess;
    guess=(guess+r)/2;
    cout<<"Fifth approximation = square root ("<<n<<") = r("<<r<<"),guess ("<<guess<<")"<<endl;    
    
    //calculate the sixth approximation
    r=n/guess;
    guess=(guess+r)/2;
    cout<<"Sixth approximation = square root ("<<n<<") = r("<<r<<"),guess ("<<guess<<")"<<endl;
    return 0;
}

