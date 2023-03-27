#include<bits/stdc++.h>
using namespace std;

class First
{
protected:
    int m;
public:
    void getm(int v)
    {
        m=v;
    }
};

class Second
{
protected:
    int n;
public:
    void getn(int v)
    {
        n=v;
    }
};
class P:public First, public Second
{
public:
    void display()
    {
        cout<<"m = "<<m<<endl;
        cout<<"n = "<<n<<endl;
        cout<<"m+n = "<<m+n<<endl;
        cout<<"m-n = "<<m-n<<endl;
        cout<<"m*n = "<<m*n<<endl;
        cout<<"m/n = "<<m/n<<endl;
    }
};
int main()
{
    P p1;
   // p1.m = 30;   //It will give Error Because it is protected
    p1.getm(10);
    p1.getn(5);
    p1.display();
    return 0;
}
