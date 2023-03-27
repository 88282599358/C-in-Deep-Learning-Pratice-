#include<bits/stdc++.h>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit(){}
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);
    void show();
};

BankDeposit::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue =principal;
    for(int i=0;i<y;i++)
    {
        returnValue = returnValue*(1+interestRate);
    }
}
BankDeposit::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principal;
    for(int i=0;i<y;i++)
    {
        returnValue = returnValue*(1+interestRate);
    }
}

void BankDeposit::show()
{
    cout<<"Principal Amount was "<<principal
        <<". Returns value after "<<years
        <<"years is "<<returnValue<<endl;
}
int main()
{
    BankDeposit bd1,bd2, bd3;
    int p,y,R;
    float r;

    cout<<"Enter the Value of"<<endl<<"Principal Amount"<<endl<<"No of Years"<<endl<<"InterestRate in Points"<<endl<<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposit(p,y,r);
    bd1.show();

     cout<<"Enter the Value of"<<endl<<"Principal Amount"<<endl<<"No of Years"<<endl<<"InterestRate in Numbers"<<endl;
    cin>>p>>y>>R;
    bd1 = BankDeposit(p,y,R);
    bd1.show();

    return 0;
}
