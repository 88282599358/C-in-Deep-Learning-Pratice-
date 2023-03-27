#include<bits/stdc++.h>
using namespace std;
//class A
//{
//    int a;
//public:
//    //A & setdata(int a)
//    void setdata(int a)
//    {
//        this->a = a;
//        return *this;
//
//    }
//    void getdata(void)
//    {
//         cout<<"The value of a is "<<a<<endl;
//    }
//};
//
//int main()
//{
//    A a;
//    a.setdata(5);
//    a.getdata();
//    return 0;
//}


class Test
{
private:
    int a, b;
public:
    Test (int a =0 ,int b =0)
    {
        this->a = a;
        this->b = b;
    }
    Test &setX(int x)
    {
        x = a;
        return *this;

    }
    Test &setY(int y)
    {
        y = b;
        return *this;

    }
    void print()
    {
        cout<<"The value of a "<<a<<" The value of b "<<b<<endl;
    }
};
int main()
{
    Test obj1(4,4);
    obj1.setX(20);
    obj1.setY(25);
    obj1.print();
    return 0;
}
