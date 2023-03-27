#include<bits/stdc++.h>
using namespace std;

int main()
{
    //Basic Example of Pointer
    int a = 5;
    int* ptr = &a;
    cout<<"The Value of a is "<<*ptr<<endl;

    //New Keyword
//    int *k = new int(82);
    float *p = new float(40.78);
    cout<<"The Value of k is "<<*p<<endl;


    // Delete Operators
    int *arr = new int[3];
    arr[0] = 10;
    *(arr+1) = 20;
    arr[2] = 30;
//    delete[] arr;
    cout<<"The Value of arr[0] is "<<arr[0]<<endl;
    cout<<"The Value of arr[1] is "<<arr[1]<<endl;
    cout<<"The Value of arr[2] is "<<arr[2]<<endl;

    return 0;
}
