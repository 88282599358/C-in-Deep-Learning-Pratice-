#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    int*b = &a;
        // & ---> (Address of) Operator
    cout << "The Address of a is: " <<&a <<endl;
    cout << "The Address of a is: " <<b <<endl;

    // * ---> (value at) Dereference operator
     cout << "The Value of b is: " <<*b <<endl;

     // Pointer to pointer
     int** c = &b;
     cout << "The Address of b is: " <<&b <<endl;
     cout << "The Address of b is: " <<c <<endl;
     cout << "The Value of c is: " <<*c <<endl;
     cout << "The value at address value_at(value_at(c)) is: " <<**c <<endl;
    return 0;
}

