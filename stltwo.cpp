#include<bits/stdc++.h>
using namespace std;

void display(list<int> &lt)
{
    list <int>::iterator iter;
    for (iter=lt.begin();iter!=lt.end();iter++)
    {
        cout<<*iter<<" ";
    }
    cout<<endl;
}
int main()
{
    list <int> list1;
    list1.push_front(78);
    list1.push_back(5);
    list1.push_back(1);
    list1.push_back(4);
    list1.push_back(9);
    list1.push_back(7);
    display(list1);
    //list1.pop_back();  //Delete Element from Last
    //list1.pop_front();  //Delete Element from First
    //list1.remove(5);  //Delete Element from list anywhere
    //list1.sort();  //Arrange the list from smaller to larger
//    display(list1);
//    list1.reverse();
//    display(list1);





    list<int> list2(3);
    list<int>::iterator iters = list2.begin();
    *iters = 23.5;
    iters++;
    *iters = 2.8;
    iters++;
    *iters = 7.8;
    iters++;
    //display(list2);
    list1.sort();
    list2.sort();
    list1.merge(list2);
    //cout<<"After Merge: ";
    //display(list1);


    return 0;
}
