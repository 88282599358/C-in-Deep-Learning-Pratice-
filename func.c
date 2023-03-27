

#include<stdio.h>

 int hello()
 {
    static int a = 5;
//    int a;
//    a = 5;
    a = a+1;
    printf("%d\n",a);
 }

 int main()
 {
     hello();
     hello();
     hello();
     hello();
//    printf("%d",a);

     return 0;
 }
