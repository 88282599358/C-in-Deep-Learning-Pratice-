#include<iostream>
#include <string>
using namespace std;

struct employee{
        int empId;
        char favch;
        float salary;
    };
// typedef struct employee{
//        int empId;
//        char favch;
//        float salary;
//    } emp;
int main()
{
   struct employee sachin;   //write emp sachin when we use typedef
   struct employee Yash;
   struct employee Ayush;
     sachin.empId = 45;
     sachin.favch = 'A';
     sachin.salary = 100000000;

     cout << "The Value of " <<sachin.empId << "\n";
     cout << "The Value of " <<sachin.favch << "\n";
     cout << "The Value of " <<sachin.salary << "\n";
    return 0;
}
