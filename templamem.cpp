#include<bits/stdc++.h>
using namespace std;
template <class T>
class Sach
{
public:
    T data;
    Sach(T a)
    {
        data = a;
    }
    void display();
};
template <class T>
void Sach<T>::display()
    {
    cout<<data<<endl;
    }

//New Program
void func(int a)
{
    cout<<"I am First Func()"<<a<<endl;
}
template<class T>
void func(T a)
{
cout<<"I am Templatic Func() "<<a<<endl;
}
int main()
{
    func(5); //Exact match takes the highest priority
//    Sach <float> h(5.7);
//    Sach <int> h(5);
//    cout<<h.data<<endl;
//    h.display();

    return 0;
}
