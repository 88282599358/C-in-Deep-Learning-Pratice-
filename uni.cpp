#include<iostream>
using namespace std;
union money{
    int rice;
    char mycar;
    float pounds;
};
int main()
{
    //Union in C++
//    union money m1;
//    m1.rice = 5;
//    m1.mycar = 'A';
//    cout << m1.rice;
//    cout << m1.mycar;


//   Enum in C++
    enum sac{Hello, World, Sachin};
    sac sa = Hello;  //optional
    cout << sa << "\n"; //optional
    cout << Hello << "\n";
    cout << World << "\n";
    cout << Sachin << "\n";

    return 0;
}
