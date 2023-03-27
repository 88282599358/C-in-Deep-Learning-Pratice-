#include<bits/stdc++.h>
//#include<stdio.h>
using namespace std;
template <class t1,class t2>
float funcavg(t1 a, t2 b)
{
    float avg =(a+b)/2.0;
    return avg;
}
template<class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
//    float a;
//    a = funcavg(5,2);
//    printf("The average of these Number is %.3f",a);
    int x=5,y=8;
    swapp(x,y);
    cout<<x<<" It is value of x"<<endl;
    cout<<y<<" It is value of y"<<endl;
    return 0;
}
