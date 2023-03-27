#include<iostream>
using namespace std;


// Method 1 is to write the sum function at upper side of main()

//int sum(int x, int y){
//    int c = x+y;
//    return c;
//}

// Method 2 is to write the sum function at down side of main() then we have to write func prototype
int sum(int x, int y);
void g();
int main()
{
    int num1, num2;
    cout << "Enter the Number_1: ";
    cin >> num1;
    cout << "Enter the Number_2: ";
    cin >> num2;
    // num1 and num2 are actual parameters
    cout << "The sum is: "<<sum(num1, num2);
    g();
    return 0;
}
int sum(int x, int y){
        // Formal Parameters a and b will be taking values from actual parameters num1 and num2.
    int c = x+y;
    return c;
}
void g(){
    cout<<"\nHello Motto!!!";
}
