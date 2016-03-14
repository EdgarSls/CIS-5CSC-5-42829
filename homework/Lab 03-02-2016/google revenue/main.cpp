/* 
 * File:   main.cpp
 * Author: Edgar Salas
 * Purpose : calculate and compare tax
 * Created on March 2, 2016, 10:17 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
   // declare varibles 
    float ustax = 39,    //United state corporate tax rate http://taxfoundation.org/blog/us-has-highest-corporate-income-tax-rate-oecd
          irltax = 12.5, // Ireland corporate tax rate http://www.revenue.ie/en/tax/ct/
          glrev = 3.1e10,  // total google revenue
          diftax,
          ustaxp,
          irltaxp;
    
   // calculation for corporate taxes payable to  us and ireland
    irltaxp = ( irltax / 100) * glrev,
    ustaxp = (ustax / 100) * glrev,
    diftax = ustaxp - irltaxp,       
    // output the results to the user
    cout<<ustaxp;
    cout<<" is the amount paid in taxes by google in the United states "<<endl;
    cout<<irltaxp;
    cout<<" is the amount paid in taxes by google in ireland "<<endl;
    cout<<"the amount of money saved by google if they moved to Ireland would be"<<endl;
    cout<<diftax<<endl;
    
    
    return 0;
}

