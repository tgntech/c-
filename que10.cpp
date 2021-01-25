/**
 * Question 10 - create  a file  and then write some text into the file through c++ program.
 **/
#include <iostream>
#include <fstream>// for handing files in cpp
using namespace std;
 
int main () {
  ofstream roli;//
  roli.open ("Kaya.txt");// will create a Text file, named kaya. in your currnt working directory.
  roli << "Hello Guys this is Roli Tamrakar .\n I am a PG Student,\n\n\nthis txt file is created through File handling "; 
  roli.close();
  return 0;
}
//#coder Roli Tamrakar