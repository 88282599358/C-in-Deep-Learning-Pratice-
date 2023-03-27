#include<bits/stdc++.h>
using namespace std;
class Base1
{
    int data1;
public:
    Base1(int i)
    {
        data1 = i;
        cout<<"Base1 class Constructor Called"<<endl;
    }
    void printdatabase1(void)
    {
        cout<<"The Value of Data1"<<data1<<endl;
    }
};
class Base2
{
    int data2;
public:
    Base2(int i)
    {
        data2 = i;
        cout<<"Base2 class Constructor Called"<<endl;
    }
    void printdatabase2(void)
    {
        cout<<"The Value of Data2"<<data1<<endl;
    }
};
class Derived:: public Base1, public Base2
{
    int derived1, derived2;
public:
    Derived(int a, int b, int c, int d):Base2(a), Base1(b)
    {
        derived1 = c;
        derived2 = d;
        cout<< "Derived class constructor called"<<endl;
    }
    void printderiveddata(void)
    {
        cout<<"The Value of Derived1 is"<<derived1<<endl;
        cout<<"The Value of Derived2 is"<<derived2<<endl;
    }
};


int main()
{
    Derived sac(1,2,3,4);
    sac.printdatabase1();
    sac.printdatabase2();
    sac.printderiveddata();
    return 0;
}
