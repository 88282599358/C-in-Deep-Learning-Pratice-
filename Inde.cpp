#include<iostream>
using namespace std;
//inline is a request it is depend on complier to accept or reject
inline int product(int a, int b){
    // Not recommended to use below lines with inline functions
    //static int c =0;  // This executes only once
    //c = c + 1;  // Next time this function is run, the value of c will be retained
    return a*b;
}

float moneyreceived(int currentmoney, float factor = 1.5){  //default value should written first here i.e. currentmoney
        return currentmoney*factor;
}

int main()
{

//    int x,y;
//    cout<<"Enter the value of a: ";
//    cin>>x;
//    cout<<"Enter the value of a: ";
//    cin>>y;
//    cout<<"The Product of a and b: "<<product(x,y)<<endl;

    int money = 100000;
    cout<<"If you have "<< money <<"Rs. in Bank Account you will receive "<< moneyreceived(money) <<" After One Year"<<endl;
    cout<<"For Bank Employee: If you have "<< money <<"Rs. in Bank Account you will receive "<< moneyreceived(money, 5.0) <<" After One Year"<<endl;
    return 0;
}
