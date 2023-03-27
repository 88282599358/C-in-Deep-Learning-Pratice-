#include<bits/stdc++.h>
using namespace std;
class SimpleCal
{
    int a,b;
public:
    void getdata()
    {
        cout<<"Enter the First Number: ";
        cin>>a;
        cout<<"Enter the Second Number: ";
        cin>>b;
    }
    void printdata()
    {
        cout<<"The Addition of a+b is: "<<a+b<<endl;
        cout<<"The Subtraction of a-b is: "<<a-b<<endl;
        cout<<"The Multiplication of a*b is: "<<a*b<<endl;
        cout<<"The Division of a/b is: "<<a/b<<endl;
    }
};
class scientificCal
{
    int a,b;
public:
    void getdata()
    {
        cout<<"Enter the First Number";
        cin>>a;
        cout<<"Enter the Second Number";
        cin>>b;
    }
    void printdata()
    {
        cout<<"The value of cos(a) is: "<<cos(a)<<endl;
        cout<<"The value of sin(a) is: "<<sin(a)<<endl;
        cout<<"The value of tan(a) is: "<<tan(a)<<endl;
        cout<<"The value of exp(a) is: "<<exp(a)<<endl;

    }
};

int main()
{
//    SimpleCal cal;
    scientificCal cal;
    cal.getdata();
    cal.printdata();
    return 0;
}
