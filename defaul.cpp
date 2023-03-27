#include<bits/stdc++.h>
using namespace std;

class Simple
{
    int data1;
    int data2;
    int data3;
public:
    Simple(int a, int b = 4, int c = 7)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printdata();
};
void Simple::printdata()
{
    cout<<"The value of A,B and C is: "<<data1 <<","<<data2<<","<<data3<<endl;
}

int main()
{
    Simple s(4,5,6);
    s.printdata();
    return 0;
}
