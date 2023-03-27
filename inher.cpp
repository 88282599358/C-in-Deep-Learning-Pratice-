#include<bits/stdc++.h>
using namespace std;
//Base class
class Employee
{
public:
    int id;
    float salary;

    Employee(int inpid)
    {
        id = inpid;
        salary = 34.0;
    }

    Employee(){}
};


//Creating a Programmer class derived from the Employee Class
class Programmer : public Employee
{
public:
    Programmer(int inpid)
    {
        id=inpid;
    }
    int languageCode = 9;
    void getdata()
    {
        cout<<id<<endl;
    }
};
int main()
{

    Employee sachin(1), yash(2);
    cout<<sachin.salary<<endl;
    cout<<yash.salary<<endl;
    Programmer Skillf(1);
    cout<<Skillf.languageCode<<endl;
    cout<<Skillf.id<<endl;
    Skillf.getdata();
    return 0;
}
