/**
 * Question 1 - Define a STUDENT class with USN, Name, and Marks in 3 tests of a subject. 
 * Declare an array of 10 STUDENT objects. Using appropriate functions, 
 * find the average of two better marks for each student. Print the USN, Name, and the average marks of all the students.
**/
#include<iostream>
#define SIZE 10
using namespace std;
class student
{
  float m1,m2,m3;
  char roll[20],name[20];
  public:
  void getdata();     //funtion prototype
  void dispdata();     //funtion prototype
};
void student::getdata()   //funtion declaration
{
  cout<<"\nEnter student Roll Number: " ;
  cin>>roll;
  cout<<"Enter student name: " ;
  cin>>name;
  cout<<"Enter student's 3 marks: " ;
  cin>>m1>>m2>>m3;
}
void student::dispdata()    //funtion declaration
{
  float avg,low=m3;
  if((m1 < m2)&&(m1 < m3))
    low = m1;
  else
  {
    if(m2 < m3)
      low = m2;
    else
      low = m3;
  }
  avg=(m1+m2+m3-low)/2;
  cout<<"\n Student Roll Number: "<<roll
  <<"\n Student name: "<<name
  <<"\n Student average: "<<avg;
}
int main()
{
  student ob[SIZE];
  int n;
  cout<<"\n"

      <<"\n Enter the number of students: ";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    ob[i].getdata();
  }
  cout<<"\n-----------------"
  <<"\nStudents Details::"
  <<"\n-----------------";
  for( int i=0;i<n;i++)
  {
    cout<<"\n\n Student:"<<i+1
    <<"\n ----------\n";
    ob[i].dispdata();
  }
  cout<<endl;
  return 0;
}
// coder -  Roli Tamrakar