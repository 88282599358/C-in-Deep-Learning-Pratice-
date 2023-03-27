#include<iostream>
using namespace std;
int main()
{
// Pointer and Arrays
        int marks[] = {23, 45, 56, 89};

    int mathMarks[4];
    mathMarks[0] = 2278;
    mathMarks[1] = 738;
    mathMarks[2] = 378;
    mathMarks[3] = 578;

    int*p = marks;

    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;

//    cout <<"The value of *p is: "<<*p << endl;
//    cout <<"The value of *(p+1) is: "<<*(p+1) << endl;
//    cout <<"The value of *(p+2) is: "<<*(p+2) << endl;
//    cout <<"The value of *(p+3) is: "<<*(p+3) << endl;
    return 0;
}
