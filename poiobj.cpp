#include<bits/stdc++.h>
using namespace std;
class Complex
{
public:
    int real, imaginary;
    void setdata(int a, int b)
    {
         real = a;
         imaginary = b;
    }
    void getdata()
    {
        cout<<"The value of real is "<<real<<endl;
        cout<<"The value of imaginary is "<<imaginary<<endl;
    }
};
int main()
{
    Complex *ptr = new Complex;
    ptr->setdata(50,20);
    ptr->getdata();

//Array of objects
Complex *ptr1 = new Complex[4];
ptr1->setdata(50,30);
ptr1->getdata();

    //Pointer Objects
//    Complex c1;
////    Complex *ptr = &c1;
//    Complex *ptr = new Complex;
//    (*ptr).setdata(50,20);
//    (*ptr).getdata();
    return 0;
}
