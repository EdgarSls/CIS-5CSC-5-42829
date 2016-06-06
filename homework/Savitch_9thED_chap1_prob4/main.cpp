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
     //Declare varibles
int nmbrpea,  // number of peas
    ppp,      // peas per pod
    ttlpea;   // total number of pods
 cout << "Press return after entering a number.\n";
 cout << "Enter the number of pods:\n";
 cin >> nmbrpea;
 cout << "Enter the number of peas in a pod:\n";
 cin >> ppp;
 ttlpea = nmbrpea + ppp;// calculation for total peas
 cout << "If you have ";
 cout << ttlpea;
 cout << " pea pods\n";
 cout << "and ";
 cout << ppp;
 cout << " peas in each pod, then\n";
 cout << "you have ";
 cout << ttlpea;
 cout << " peas in all the pods.\n";
 return 0; }