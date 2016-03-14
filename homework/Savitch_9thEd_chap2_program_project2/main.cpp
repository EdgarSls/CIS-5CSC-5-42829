/* 
 * File:   main.cpp
 * Author: Edgar Salas
 * purpose: To calculate new salary and backpay
 * Created on March 9, 2016, 9:01 AM
 */

#include <iostream>

using namespace std;
 

int main(int argc, char** argv) {
  const float perinc=0.076;
  
  float oldann,  //old annual salary
        oldmon,  //old monthly salary
        newmon,  //new monthly salary
        newann,  //new annual salary
        backp;   //back pay due
          
  //prompt user to input months due and current salary
  cout<<"Type in your current salary"<<endl;
  cin>>oldann;
  
  //calculate the inputs
  oldmon=oldann/12;
  newann=oldann*(1+perinc);
  newmon=newann/12;
  backp=(newann-oldann)/(12/6);
  //output results to user
  cout<<"your old annual salary was $"<<oldann<<""<<endl;
  cout<<"your old monthly salary was $"<<oldmon<<""<<endl;
  cout<<"your new monthly salary is $"<<newmon<<""<<endl;
  cout<<"your new annual salary is $"<<newann<<""<<endl;
  cout<<"your back pay due is $"<<backp<<""<<endl;
          
        
  
    return 0;
}

