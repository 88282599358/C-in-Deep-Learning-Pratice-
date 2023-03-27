#include<bits/stdc++.h>
using namespace std;
class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout<<"Enter the ID: ";
        cin>>id;
        count++;
    }
    void getdata(void)
    {
        cout<<"The Employee ID is "<<" "<<id<<" and the employee Number "<<count<<endl;
    }
    static void getcount(void)
    {
        cout<<"The Value is count "<<count<<endl;
    }
};
int Employee::count; // Default value is 0
int main()
{
    Employee sachin, yash, atharva;

    sachin.setData();
    sachin.getdata();
    Employee::getcount();

    yash.setData();
    yash.getdata();
    Employee::getcount();

    atharva.setData();
    atharva.getdata();
    Employee::getcount();
    return 0;
}

