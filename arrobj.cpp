#include<bits/stdc++.h>
using namespace std;

class Employee
{
    int id;
    int salary;
public:
    void setid(void)
    {
        salary = 122;
        cout<<"Enter the Id of Employee: ";
        cin>>id;
    }
    void getid(void)
    {
        cout<<"The id of the employee is "<<id<<endl;
    }

};
int main()
{
    Employee evolve[5];
    for (int i=0;i<5;i++)
    {
    evolve[i].setid();
    evolve[i].getid();
    }
    return 0;
}
