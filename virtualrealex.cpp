#include<bits/stdc++.h>
using namespace std;
class cplus
{
protected:
    string title;
    float rating;
public:
    cplus(string s, float r)
    {
        //strcpy(title,s);   //strcpy() function to copy string
        title = s;
        rating = r;
    }
    virtual void Display(){}
};
class cplusp:public cplus
{
    float videolen;
public:
    cplusp(string s, float r, float vl):cplus(s,r)
    {
        videolen = vl;
    }
    void Display()
    {
        cout<<"This is Title "<<title<<endl;
        cout<<"Ratings: "<<rating<<" out of 5 Stars "<<endl;
        cout<<"Length of the video "<<videolen<<endl;
        cout<<endl;
    }
};
class cplusplus:public cplus
{
    int words;
public:
    cplusplus(string s, float r, float wc):cplus(s,r)
    {
        words = wc;
    }
    void Display()
    {
        cout<<endl;
        cout<<"This is Text Title "<<title<<endl;
        cout<<"Ratings of the text Tut: "<<rating<<" out of 5 Stars "<<endl;
        cout<<"No of the Video "<<words<<endl;
    }
};
int main(){
    string title;
    float rating, vlen;
    int words;

    // for Code With video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    cplusp djVideo(title, rating, vlen);

    // for Code With  Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    cplusplus djText(title, rating, words);

    cplus* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->Display();
    tuts[1]->Display();

    return 0;
}
