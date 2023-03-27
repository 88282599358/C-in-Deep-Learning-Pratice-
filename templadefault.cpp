#include<bits/stdc++.h>
using namespace std;
template <class t1= int, class t2=float, class t3=char>
class defaclass
{
public:
    t1 a;
    t2 b;
    t3 c;
    defaclass(t1 x, t2 y, t3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
    }
};
int main()
{
    defaclass <>d(5,5.3,'s');
    d.display();
    cout<<endl;
    defaclass <float, char, int>h(8.6,'g',8);
    h.display();
    return 0;
}
