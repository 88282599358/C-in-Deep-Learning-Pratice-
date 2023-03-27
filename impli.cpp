#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

class Shop
{
    int itemID[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void){counter =0;}
     void setItem(void);
     void displayPrice(void);

};

void Shop::setItem(void)
{
    cout<<"Enter Id of the Item no "<<counter + 1 <<endl;
    cin>>itemID[counter];
    cout<<"Enter the Price of your Item: "<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void Shop::displayPrice(void)
{
    for(int i=0;i<counter; i++)
    {
        cout<<"The Price of Item is "<<itemID[i]<<" " <<itemPrice[i]<<endl;
    }
}


int main()
{
    Shop stall;
    stall.initCounter();
    stall.setItem();
    stall.setItem();
    stall.setItem();
    stall.displayPrice();

    return 0;
}

