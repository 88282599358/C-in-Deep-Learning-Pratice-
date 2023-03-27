#include<bits/stdc++.h>
using namespace std;

class Test
{
    int a;
    int b;
public:
//    Test(int i, int j): a(i), b(j)
//    Test(int i, int j): a(i), b(i+j)
//    Test(int i, int j): a(i), b(2*j)
//    Test(int i, int j): a(i), b(a+j)
    Test(int i, int j): b(j), a(i+b)
    {
        cout<<"Constructor Executed"<<endl;
        cout<<"Value of a: "<<a<<endl;
        cout<<"Value of b: "<<b<<endl;
    }
};


int main()
{
    Test t(14,60);
    return 0;
}
