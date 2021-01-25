/**
 * Question -17 write a c++ program  to maintain elementary database of students using files.
 **/

#include <iostream>
#include <fstream>
using namespace std;
 
static int totrec=0;
 
int main()
{
    int choice;
    while(1)
    {
        cout<<"\n::Options :: \n";
        cout<<"1) Add New student\n";
        cout<<"2) Display all Students\n";
        cout<<"3) Exit\n";
        cout<<"\nEnter your choice :: ";
        cin>>choice;
 
        switch (choice)
        {
        /**  case 1 :
                {
                     ofstream outfile;
                     outfile.open("student.txt",ios::out);
                     cout<<"\nEnter the name :: ";
                     char name[20];
                     cin>>name;
                     outfile<<name<<endl;
                     cout<<"\nEnter semester :: ";
                     int semester;
                     cin>>semester;
                     outfile<<semester<<endl;
                     totrec= totrec + 1;
                     outfile.close();
                }
                 break;**/
 
          case 1 :
                {
                     ofstream outfile;
                     outfile.open("student.txt",ios::app);
                    
                     cout<<"\nEnter the name :: ";
                     char name[20];
                     cin>>name;
                     outfile<<name<<endl;
                     cout<<"\nEnter semester :: ";
                     int semester;
                     cin>>semester;
                     outfile<<semester<<endl;
                     totrec= totrec + 1;
                     outfile.close();
                 }
                 break;
 
          
 
          case 2 :
                {
                     ifstream infile;
                     infile.open("student.txt",ios::in);
                     const int size=80;
                     char line[size];
                     int counter=totrec;
                     while(counter > 0)
                     {
                     infile.getline(line,size);
                     cout<<"\n\nNAME     : "<<line<<endl;
                     infile.getline(line,size);
                     cout<<"semester : "<<line<<endl;
                     
                     counter--;
                     }
                     infile.close();
                }
                    break;
 
         case 3  :
            cout << "\n\n";
            cout << "\t\t     THANK YOU ! Coded By Roli Tamrakar";
            cout << "\n\n";
            exit(0);
          default :
            cout<<"\nInvalid Choice\nTRY AGAIN.......\n";
          }
    }
    return 0;
}

//#coder Roli Tamrakar