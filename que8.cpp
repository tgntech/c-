/**
 * Question 8 - Write A C++ Program to create a template function to sort integers and double.
 **/
#include<iostream>
using namespace std;

template <class T>
void sort(T arr[], int SIZE){
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i+1; j < SIZE; j++)
		{
			if (arr[i] > arr[j])
			{
				T temp;
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}


int main(){
    int N,a;
    int int_array[N];
    double float_array[N];

    cout<<"Options ;"<<endl;
    cout<<"1 : sort integers"<<endl<<"2 : sort double";

    cin>>a;

    cout<<"How many elements do you want to sort ?:"<<endl;
    cin>>N;



  switch (a) {
      case 1:
    	   cout<<"Entner integer array elements:"<<endl;
	      for (int i = 0; i < N; i++)
	      {
		      cin>>int_array[i];
	      }
         sort(int_array,N);
         cout<<"After sorting they are :"<<endl;

	      for (int i = 0; i < N; i++)
	      {
		      cout<<int_array[i]<<", ";
	      }
	      cout<<endl;
      break;


      case 2:
         cout<<"List After sorting :"<<endl;
	      for (int i = 0; i < N; i++)
	      {
		      cin>>float_array[i];
	      }
    	   sort(float_array, N);
         cout<<"List After sorting  :"<<endl;

	      for (int i = 0; i < N; i++)
	      {
		      cout<<float_array[i]<<", ";
	      }
      break;
   }
    
	
	
	
	return 0;
}
//coder Roli Tamrakar