#include<bits/stdc++.h>
using namespace std;
//class BaseClass
//{
//public:
//    int var_b = 1;
//    void display()
//    {
//       cout<<"Displaying Base class variable var_base1: "<<var_b<<endl;
//    }
//};
//class DerivedClass : public BaseClass
//{
//public:
//    int var_d;
//    void display()
//    {
//       cout<<"Displaying Base class variable var_base: "<<var_b<<endl;
//       cout<<"Displaying Base class variable var_Derived: "<<var_d<<endl;
//    }
//};
//int main()
//{
//    BaseClass *b_c_point;
//    BaseClass obj_b;
//    DerivedClass obj_d;
//    b_c_point = &obj_d;
//
//    b_c_point->display();
//
//    return 0;
//}


//Program 2
class B
{
public:
    virtual void print()
    {
        cout<<"Print Base Class"<<endl;
    }
    void show()
    {
        cout<<"Show Base Class"<<endl;
    }
};
class D: public B{
void print()
    {
        cout<<"Print Derived Class"<<endl;
    }
    void show()
    {
        cout<<"Show Derived Class"<<endl;
    }
};
int main()
{
    B *bptr;
    D obj_derived;
    bptr = &obj_derived;
    // Virtual function, binded at runtime
    bptr->print();
    // Non-virtual function, binded at compile time
    bptr->show();
    return 0;
}
