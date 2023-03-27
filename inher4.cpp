#include<bits/stdc++.h>
using namespace std;
class Student
{
protected:
    int roll_no ;
public:
    void getrollno(int a)
    {
        roll_no = a;
    }
    void putno()
    {
        cout<<"The Roll no is "<<roll_no<<endl;
    }
};
class test:public Student
{
protected:
    int sub1;
    int sub2;
public:
    void getmarks(int x, int y)
    {
        sub1 = x;
        sub1 = y;
    }
    void putmarks()
    {
        cout<<"Subject 1 Marks = "<<sub1<<endl;
        cout<<"Subject 2 Marks = "<<sub2<<endl;
    }
};
class Sport
{
protected:
    int score;
public:
    void getscore(int c)
    {
        score = c;
    }
    void putscore()
    {
        cout<<"The Sports Score is "<<score<<endl;
    }

};

class result: public test, public Sport
{
    int total;
public:
    void display()
    {
        total = sub1 + sub2 + score;
        putno();
        putmarks();
        putscore();
        cout<<"The Total Marks are = "<<total<<endl;
    }
};

int main()
{
    result r1;
    r1.getrollno(1);
    r1.getmarks(16,17);
    r1.getscore(50);
    r1.display();
    return 0;
}
