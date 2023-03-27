#include<bits/stdc++.h>
#include<map>
#include<string>
using namespace std;
int main()
{
    // Map is an associative array
    map <string, int> marksMap;
    marksMap["Sachin"] =98;
    marksMap["Yash"] = 99;
    marksMap["Ankush"] = 98;
    marksMap["Krishna"] = 89;
    marksMap.insert({{"Ayush" , 45},{"Ajay" , 50}});
    map <string, int>:: iterator iter;
    for (iter = marksMap.begin(); iter!=marksMap.end();iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    cout<<"The size is: "<<marksMap.size()<<endl;
    cout<<"The Max_size is: "<<marksMap.max_size()<<endl;
    cout<<"The Empty's return value is: "<<marksMap.empty()<<endl;
    return 0;
}
