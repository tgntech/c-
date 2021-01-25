/**
 * Question -11 write c++ program to write and read values using variables in file
 **/

#include <iostream>
#include <fstream>

using namespace std;
 
int main () {
   char data[100];

   ofstream rtfiles;//wrrintg mode
   rtfiles.open("roli.txt");

   cout << "Writing to the file" << endl;
   cout << "What is your name: "; 
   cin.getline(data, 100);

   rtfiles << data << endl;

   rtfiles.close();

   ifstream rf; ///reading mode
   rf.open("roli.txt"); 
 
   cout << "Reading from the file" << endl; 
   rf >> data; 

   cout << data << endl;
   

   rf.close();

   return 0;
}
//#coder Roli Tamrakar