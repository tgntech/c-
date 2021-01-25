/**
 * Question -11 write c++ program to write and read objects using read and write function.
 **/
#include<iostream>
#include <fstream>
using namespace std;
class name
{
    private:
        char name[30],phone[10];
        
        
    public:
        void getData(void)
        { cout<<"Enter your Full name:"; cin.getline(name,30);
          cout<<"Enter Your Phone Number:"; cin.getline(phone,10);
          
        }
 
        void showData(void)
        {
        cout<<"Name:"<<name<<endl<<"phone:"<<phone<<endl;
        }
};
	
	
int main()
{
    name n;
     
    ofstream file;
 
    
    file.open("rt.txt");
 
    
    n.getData();    
    file.write((char*)&n,sizeof(n));    //write into file
 
    file.close(); 
     
    ifstream file1;

    file1.open("rt.txt");
    file1.read((char*)&n,sizeof(n));
 
    n.showData();
    file1.close();
     
    return 0;
}
//#coder - Roli Tamrakar