//#include<bits/stdc++.h>
//using namespace std;
//class Account
//{
//
//public:
//    float salary = 60000;
//};
//class Programmer:public Account
//{
//public:
//    float bonus = 5000;
//};
//int main()
//{
//Programmer p1;
//cout<<"The salary of Employee of: "<<p1.salary<<endl;
//cout<<"The Bonus of Employee of: "<<p1.bonus<<endl;
//    return 0;
//}


#include<bits/stdc++.h>
using namespace std;
class Animal
{

public:
    void eat()
    {
        string eating = "Roti";
    cout<<"Dog Eating Dish "<<eating<<endl;
    }
};
class Dog:public Animal
{
public:
    void bark()
    {
        cout<<"Dog is Barking....";
    }
};
int main()
{
Dog d1;
d1.eat();
d1.bark();
    return 0;
}
