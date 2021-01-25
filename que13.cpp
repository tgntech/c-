/**
 * Question -13 write a c++ program  to implementing basic operation of class ios , ie, setf unsetf precision
 **/

#include <iostream>
#include <fstream>
using namespace std;

    int main () {
  
    cout << "Implementing ios::setf\n\n"; 
    cout.setf ( ios::hex,ios::basefield );  // set hexadecemial value as the basefield
  cout.setf ( ios::showbase );                  // activate showbase
  cout << 1000 << '\n';  

    cout << "\n\nImplementing ios::unsetf\n\n"; 
    cout.unsetf ( ios::showbase );                // deactivate showbase
  cout << 1000 << '\n';

    cout << "\n\nImplementing ios::precision\n\n"; 
    cout.setf(ios::fixed, ios::floatfield); 
    cout.precision(1); //print desired digit after decimal
    cout<<3.142747444<<endl; 

  
   return 0;
}
//#coder Roli Tamrakar