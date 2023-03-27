#include<bits/stdc++.h>
using namespace std;
class Complexes
{
    int a,b;
public:
    Complexes(int,int);  // Constructor declaration

    void printNumber()
    {
        cout<<"You Number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
Complexes::Complexes(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
//Implicit Call
Complexes a(4,6);
a.printNumber();

//Explicit Call
Complexes b(5,8);
b.printNumber();
    return 0;
}
