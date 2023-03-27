#include<bits/stdc++.h>
using namespace std;
template <class T>
class Vector
{
public:
    T *arr;
    int Size;
    Vector(int s)
    {
        Size = s;
        arr = new int[Size];
    }
    T dotproduct(Vector &v)
    {
        T d = 0;
        for(int i=0;i<Size;i++)
        {
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }
};
int main()
{
    Vector <int>v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 6;
    v1.arr[2] = 5;
    Vector <int>v2(3);
    v2.arr[0] = 7;
    v2.arr[1] = 9;
    v2.arr[2] = 8;
    int a = v1.dotproduct(v2);
    cout<<a<<endl;
    return 0;
}
