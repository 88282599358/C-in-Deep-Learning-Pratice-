#include<bits/stdc++.h>
using namespace std;
class show
{
    int a;
public:
    virtual void func() = 0;
    int getX(){ return a; }
};
class Derived: public show
{
    int b;
public:
    void func()
    {
        cout<<"func() called";
    }
};
int main()
{
    Derived d;
    d.func();
    return 0;
}
