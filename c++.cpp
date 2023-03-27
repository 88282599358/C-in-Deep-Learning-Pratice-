#include<iostream>
using namespace std;
int main()
{

//    int myNum = 54;
//    cout << Hello
//
//    int tv;
//    cout << "Enter a Number:";
//    cin >> tv;
//    cout << "You Number is: " << tv,"\n";
//    cout << "You Number is:\\ " << tv;  //escape sequence
//    cout << "You Number is:\" " << tv;
//    cout << "You Number is:\t " << tv;


//      int x=5,y=6,z=9;
//      cout << x+y+z;



// Calculator
int a,b;
char op;
int result;
cout<< "Enter the Number1: ";
cin >> a;
cout << "Enter the Operators:";
cin >> op;
cout<< "Enter the Number2: ";
cin >> b;
    if (op == '+')
    {
    result = a+b;
    cout << result;
    }
    else if (op == '-')
    {
    result = a-b;
    cout << result;
    }
    else if (op == '*')
    {
    result = a*b;
    cout << result;
    }
    else if (op == '/')
    {
    result = a/b;
    cout << result;
    }
    else {
        cout << "Invalid Number or Operators!!!";
    }
    return 0;
}
