#include<bits/stdc++.h>
using namespace std;

class Number
{
    int a;
public:
    Number()
    {
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }
    // When no copy constructor is found, compiler supplies its own copy constructor
    Number(Number &obj)
    {
        cout<<"Copy Constructor called!!!"<<endl;
        a = obj.a;
    }

    void display()
    {
        cout<<"The Number for this object is "<<a<<endl;
    }

};

int main()
{
    Number x,y,z(45), z2;
    x.display();
    y.display();
    z.display();

    Number z1(z); // Copy constructor invoked
    z1.display();

    z2 = z; // Copy constructor not called
    z2.display();

    return 0;
}
