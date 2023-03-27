#include<bits/stdc++.h>
using namespace std;
class Complexes
{
    int a,b;
public:
    Complexes(void);  // Constructor declaration

    void printNumber()
    {
        cout<<"You Number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
Complexes::Complexes(void)
{
    a = 10;
    b = 9;
}
int main()
{
    Complexes c;
    c.printNumber();
    return 0;
}
