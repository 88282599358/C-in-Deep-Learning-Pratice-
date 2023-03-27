#include<iostream>
using namespace std;

//Recursion means ek function khud ko hi call kare


// Factorial
//int fact(int n){
//    if (n<=1){
//        return 1;
//    }
//    return n * fact(n-1);
//}

//Fibonacci number
int fib(int m){
    if (m<=1){
        return 1;
    }
    return fib(m-2) + fib(m-1);
}
int main()
{

    int a;
//    cout<<"Enter the Number for Factorial: ";
//     cin>>a;
    cout<<"Enter the Number for Fibonacci: ";
    cin>>a;
//    cout<< "The Factorial of "<<a<<" is "<<fact(a)<<endl;
    cout<<"The term in fibonacci sequence at position "<<a<< " is: "<<fib(a)<<endl;
    return 0;
}
