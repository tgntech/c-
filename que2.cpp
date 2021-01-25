// Question- 2 :  Write a program to find volume of cube, cylinder,sphere using function overloading.
                                                                  
#include<iostream>
using namespace std;
#define PI 3.1416

// l = length, b = breadth, h = height, r = radius

float volume(float l, float b, float h){
    return l * b * h;      //for rectangle
} 
float volume(float r){
    	return (4.0/3.0) * PI * r * r *r;     //for sphere

}
float volume(float r, float h){
    	return PI * r *r * h;      //for cylinder

}


int main(){
	float rect_l, rect_b, rect_h,  sphere_r,     cylinder_r, cylinder_h;

    cout<<"\nEnter the Length, Breadth and Height of Rectangle: \n";
    cin>>rect_l>>rect_b>>rect_h;
	cout<<"Volume of rectangle = l * b * h = "<<volume(rect_l, rect_b, rect_h)<<endl;


    cout<<"\nEnter the Redius of Sphere: \n";
    cin>>sphere_r;
    
	cout<<"Volume of Sphere = (4.0/3.0) * PI * r * r *r = "<<volume(sphere_r)<<endl;


    cout<<"\nEnter the Redius And height of cylinde: \n";
    cin>>cylinder_r>>cylinder_h;

	cout<<"Volume of Cylinder = PI * r *r * h = "<<volume(cylinder_r, cylinder_h)<<endl;
	return 0;
}
//coder-Roli Tamrakar


