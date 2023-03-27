#include<iostream>
using namespace std;
int sum(float a, int b){
    cout<<"Using Function with 2 Argu: "<<endl;
    return a+b;
}
int sum(float a, int b, int c){
    cout<<"Using Function with 3 Argu: "<<endl;
    return a+b+c;
}
// Calculate the volume of a cylinder
int volume(double r, int h){
    return (3.14*r*r*h);
}

// Calculate the volume of cube
int volume(int x){
    return (x*x*x);
}
// Calculate the volume of a Rectangular Box
int volume(int l, int b, int he){
    return (l*b*he);
}

int main()
{
    cout<< "The sum of 2 Number is: "<<sum(5,6)<<endl;
    cout<< "The sum of 3 Number is: "<<sum(5,6,3)<<endl;
    cout<< "The Volume of cuboid of 5,6,3 is: "<<volume(5,6,3)<<endl;
    cout<< "The Volume of Cylinder of 3 and height 7 is: "<<volume(3,7)<<endl;
    cout<< "The Volume of cube of side is: "<<volume(3)<<endl;


    return 0;
}
