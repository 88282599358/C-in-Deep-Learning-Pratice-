#include<bits/stdc++.h>
using namespace std;
class student
{
protected:
    int roll_no;
public:
    void setnumber(int a)
    {
        roll_no = a;
    }
    void printnumber(void)
    {
        cout<<"Your Roll No is"<<roll_no<<endl;
    }
};

class Test: virtual public student
{
protected:
    float maths,physics;
public:
    void set_marks(float m, float n)
    {
        maths = m;
        physics = n;
    }
    void printmarks(void)
    {
        cout<<"Your result is: "<<endl
        <<"Maths: "<<maths<<endl
        <<"Physics: "<<physics<<endl;

    }
};

class Sports:public student
{
protected:
    float score;
public:
    void set_score(float s)
    {
        score = s;
    }
    void printscore(void)
    {
        cout<<"Your PT Score is: "<<score<<endl;

    }
};

class Result:public Test,public Sports
{
private:
    float total;
public:
    void display(void)
    {
        total = maths + physics + score;
        printnumber();
        printmarks();
        printscore();
        cout<<"Your Total Score is: "<<endl;

    }
};

int main()
{
    Result r1;
    r1.setnumber(50);
    r1.set_marks(78.5,99.6);
    r1.printscore(100);
    r1.display();
    return 0;
}
