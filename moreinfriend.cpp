#include<bits/stdc++.h>
using namespace std;
class B;
class A
{
    int data;
public:
    void setvalue(int value)
    {
        data = value;
    }
    friend void add(A,B);
};

class B
{
    int num;
public:
    void setvalue(int value)
    {
        num = value;
    }
    friend void add(A,B);

};

void add(A o1, B o2)
{
    cout<<"Summing of the Data of A and B objects gives me: "<<o1.data + o2.num<<endl;
}

int main()
{
    A a;
    a.setvalue(13);

    B b;
    b.setvalue(15);

    add(a,b);


    return 0;
}
