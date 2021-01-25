/**
 * Question 1 - Write a c++ program to create a  class called STUDENT with data members name,roll number,age.
 * using inheritance create classes UGstudent and PGstudent having fields as semester fees 
 * and stipend. Enter the data atleast 6 students of each class. Find average age 
 * semester wise for all UG and PG students separately.
 * **/
#include<iostream>
using namespace std;
class Student
{
	protected:
		char name [20];
		int rn,age;
};

class Ug : public Student
{
	int sem,fee,sti;

	public:
	void getdata()
	{
		cout<<"\nEnter Roll Number : " ;
		cin>>rn;
		cout<<"\nEnter Name: ";
		cin>>name;
		cout<<"\nEnter Age : ";
		cin>>age;
		cout<<"\nEnter Semester : ";
		cin>>sem;
		cout<<"\nEnter Fee : ";
		cin>>fee;
		cout<<"\nEnter Stipend : ";
		cin>>sti;
	}

void display()
	{
		cout<<name<<"\t"<<age<<"\t"<<sem<<"\n";
	}

	int getsem()
	{
		return(sem);
	}

	int getage()
	{
		return(age);
	}

};

class Pg : public Student
{
	int sem,fee,sti;

	public:
	void getdata()
	{
		cout<<"\nEnter Roll Number : " ;
		cin>>rn;
		cout<<"\nEnter Name: ";
		cin>>name;
		cout<<"\nEnter Age : ";
		cin>>age;
		cout<<"\nEnter Semester : ";
		cin>>sem;
		cout<<"\nEnter Fee : ";
		cin>>fee;
		cout<<"\nEnter Stipend : ";
		cin>>sti;
	}

	void display()
	{
		cout<<name<<"\t"<<age<<"\t"<<sem<<"\n";
	}

	int getsem()
	{
		return(sem);
	}

	int getage()
	{
		return(age);
	}

};

int main()
{
	

	Pg pg[5];
	Ug ug[5];

	int flag,age,sem,agesum=0,semcnt=0,i,j;

	cout<<"\n\nEnter Post Graduate students details..\n";
	for(i=0; i<5; i++ )
		pg[i].getdata();

	cout<<"\n\nEnter Under Graduate students details..\n";
	for(i=0; i<5; i++ )
		ug[i].getdata();

	cout<<"\nUG - students details..\n";
	cout<<"--------------------------\n";
	cout<<"Name\tAge\tSem\n";
	for(i=0; i<5; i++ )
		ug[i].display();
	cout<<"--------------------------\n";
	for(i=1; i<9; i++ )
	{
		flag=0;
		for(j=0; j<5; j++ )
		{
			sem=ug[j].getsem();
			age=ug[j].getage();

			if( i==sem )
			{
				agesum+=age;
				semcnt++;
				flag=1;
			}
		}
	if(flag)
	   cout<<i<<"\t"<<agesum/semcnt<<endl;
}

	agesum=0,semcnt=0;

	cout<<"\n\nPG - students details..\n";
	cout<<"--------------------------\n";
	cout<<"Name\tAge\tSem\n";
	for(i=0; i<5; i++ )
		pg[i].display();
	cout<<"--------------------------\n";
	for(i=1; i<9; i++ )
	{
		flag=0;
		for(j=0; j<5; j++ )
		{
			sem=pg[j].getsem();
			age=pg[j].getage();

			if( i==sem )
			{
				agesum+=age;
				semcnt++;
				flag=1;
			}
		}
			if(flag)
			cout<<i<<"\t"<<agesum/semcnt<<endl;
	}

	return 0;

}

// coder - Roli Tamrakar