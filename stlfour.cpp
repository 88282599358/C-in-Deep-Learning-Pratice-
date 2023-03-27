#include<bits/stdc++.h>
#include<functional>
using namespace std;

int main()
{
    // Function Objects (Functor) : A function wrapped in a class so that it is available like an object
    int arr[] = {1,2,3,8,9,7};
    sort(arr,arr+5);
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}
