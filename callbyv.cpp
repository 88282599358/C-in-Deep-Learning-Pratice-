#include<iostream>
using namespace std;

// Call by reference using pointers
void swappointer(int*a, int*b){
    int t = *a;
    *a = *b;
    *b = t;
}

// Call by reference using C++ reference Variables
void swaprefer(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
int main()
{
    int x, y;
    cout<<"Enter the value 1 for swap: ";
    cin>>x;
    cout<<"Enter the value 2 for swap: ";
    cin>>y;
    cout << "The value of x is "<<x <<"and the value of y is "<<y <<endl;
//    swappointer(&x,&y);
      swaprefer(x,y);
    cout << "The value of x is "<<x <<"and the value of y is "<<y <<endl;

    return 0;
}
