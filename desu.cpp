#include<bits/stdc++.h>
using namespace std;

// Destructor never takes an argument nor does it return any value
int Count = 0;
class num
{
public:
    num()
    {
    Count++;
    cout<<"This is the Time when Constructor is called object number "<<Count<<endl;
    }
    ~num()
    {
    cout<<"This is the Time when destructor  is called object number "<<Count<<endl;
    Count--;
    }
};
int main()
{
    cout<<"We are creating our first main function "<<endl;
    cout<<"Creating first objects n1"<<endl;
    num n1;
    {
        cout<<"Enter this Block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2,n3;
        {
            cout<<"Exiting the Block"<<endl;
        }

    }
    cout<<"Back to Main"<<endl;
    return 0;
}
