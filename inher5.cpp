#include<bits/stdc++.h>
using namespace std;

class A
{
public:
    int x,y;
    void getdata()
    {
        cout<<"Enter the Value of x,y: ";
        cin>>x>>y;
    }
};
class B:public A
{
public:
    void multiple()
    {
        cout<<"Multiplying the value = "<<x*y<<endl;
    }
};
class C:public A
{
public:
    void add()
    {
        cout<<"Adding the value = "<<x+y<<endl;
    }
};
class D:public A
{
public:
    void subtract()
    {
        cout<<"Subtracting the value = "<<x-y<<endl;
    }
};
class E:public A
{
public:
    void divide()
    {
        cout<<"Dividing the value = "<<x/y<<endl;
    }
};

int main()
{
    B b1;
    C c1;
    D d1;
    E e1;
    b1.getdata();
    b1.multiple();

    c1.getdata();
    c1.add();

    d1.getdata();
    d1.subtract();

    e1.getdata();
    e1.divide();

    return 0;
}
