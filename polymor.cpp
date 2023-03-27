#include<bits/stdc++.h>
using namespace std;
class BaseClass
{
public:
    int var_b;
    void display()
    {
       cout<<"Displaying Base class variable var_base1: "<<var_b<<endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int var_d;
    void display()
    {
       cout<<"Displaying Base class variable var_base: "<<var_b<<endl;
       cout<<"Displaying Base class variable var_Derived: "<<var_d<<endl;
    }
};
int main()
{
    BaseClass *b_c_point;  //Normal Pointer
    BaseClass obj_b;      // BaseClass Obj
    DerivedClass obj_d;    // DerivedClass Obj
    b_c_point = &obj_d;   // Here we BClass Pointer we point obj of Derived class

    //Run Time
    b_c_point->var_b = 25;   //Base class
    //b_c_point->var_d= 134; // Will throw an error
    b_c_point->display();    //It is running from Base Class

    DerivedClass *d_c_point;
    d_c_point = &obj_d;
    d_c_point->var_b = 50;
    d_c_point->var_d = 500;
    d_c_point->display();

    return 0;
}
