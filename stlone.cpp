#include<bits/stdc++.h>
#include<vector>
using namespace std;
template <class T>
void display(vector<T> &v)
//void display(vector<int> &v)
{
    cout<<"Display the Vector: "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
        //cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
int main()
{
    //Way to create vector
    vector<int> vec1; //zero length integer vector
    vector<char> vec2(4);  //4-element character vector
//    vec2.push_back('2');
//    display(vec2);
    vector<char> vec3(vec2); //4-element character vector from vec2
    //display(vec2);
    vector<int> vec4(6,3);  //6-element vector of 3s
    display(vec4);
    cout<<vec4.size();  //size() to find size











//    vector<int> vecone;
//    int element, Sizes;
//    cout<<"Enter the size of your vector"<<endl;
//    cin>>Sizes;
//    for(int i=0; i<Sizes;i++)
//    {
//        cout<<"Enter the Value to add in the vector: ";
//        cin>>element;
//        vecone.push_back(element);
//    }
//    display(vecone);
////    vecone.pop_back();
//
//    // To insert and begin
//    vector<int> :: iterator iter = vecone.begin();
//    //vecone.insert(iter,20);  //To insert at 0th position
//    //vecone.insert(iter+1,20);  //To insert at 1st position
//    vecone.insert(iter,25,20);  //To insert and make 25 copy
//    display(vecone);
    return 0;
}
