#include<bits/stdc++.h>
using namespace std;

class ShopItem
{
    int id;
    float price;
    public:
        void setData(int a, float b){
            id = a;
            price = b;
        }
        void getData(void){
            cout<<"Code of this item is "<< id<<endl;
            cout<<"Price of this item is "<<price<<endl;
        }
};

int main()
{
    int Size = 3;
    //For understanding
//    int *ptr = &Size;
    //int *ptr = new int [25];
    ShopItem *ptr = new ShopItem [Size];
    ShopItem *ptrTemp = ptr; //It will help to print data when loop ends
    int p,i;
    float q;
    for (i=0; i<Size; i++)
    {
        cout<<"Enter the Id and Price of the Item: "<<i+1<<endl;
        cin>>p>>q;
//        (*ptr).setData(p,q);
            ptr->setData(p,q);
            ptr++;
    }
    for (i=0; i<Size; i++)
    {
        cout<<"Item Number: "<<i+1<<endl;
            ptrTemp->getData();
            ptrTemp++;
    }

    return 0;
}
