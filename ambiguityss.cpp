#include<bits/stdc++.h>
using namespace std;

class A
{
public:
    void func()
    {
        cout<<"I'm in Class A"<<endl;
    }
};
class B
{
public:
    void func()
    {
        cout<<"I'm in Class B"<<endl;
    }
};
class C:public A, public B
{
//We have Nothing
};
int main()
{
    C obj;
    obj.A::func();
    obj.B::func();
    return 0;
}



















//class Base1
//{
//public:
//    void greet()
//    {
//        cout<<"Hello!! I'm Good!!"<<endl;
//    }
//};
//
//class Base2
//{
//public:
//    void greet()
//    {
//        cout<<"Hello!! Hum Badiya hai!!"<<endl;
//    }
//};
//class Derived: public Base1 , public Base2
//{
//    int a;
//public:
//    void greet()
//    {
//        Base2::greet();
//    }
//};
//int main()
//{
//    Base1 b1;
//    Base2 b2;
//    b1.greet();
//    Derived d;
//    d.greet();
//    return 0;
//}
