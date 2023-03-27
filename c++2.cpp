#include<iostream>
using namespace std;
int main()
{
//    for (int i=3;i<=30; i=i+3){
//        cout<< i << "\n";
//    }


// Program to display the multiplication table vertically from 1 to n

int i,j,n;
cout<<"Display the Multiplication table vertically from 1 to n:\n";
cout<<"--------------------------------------------------------\n";
cout<<"Input the Number:";
cin >> n;

    for (int i=1;i<=10; i++){
        for (int j=1; j<=n;j++){
            if (j<=n){
                cout << j << "*" << i << "=" << i*j <<"\t";
            }
            else{
                 cout << j << "*" << i << "=" << i*j;
            }
        }
        cout<< i << "\n";
    }
    return 0;
}
