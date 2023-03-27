#include<stdio.h>

//int a = 5; //Global Variables
//int hello()
//{
//   static int b = 5;   // Local Var and we can make it static when we need
//    printf("%d\n",b+a);
//}
 int main()
 {
     int c = 6;     //Local Variables and by default is auto
     printf("%d\a",c+a);
     hello();

     return 0;

 }



// Local Variables with parameter

//int hello(int a)
//{
//    int b = 5;
//    printf("%d",b + a);
//}
//int main()
//{
//
//    hello(5);
//
//    return 0;
//}


// Block Local Variables

//static int a = 5;
//int main()
//{
//    int b= 6;
//    printf("%d\n", a+b);  //11
//    {
//        int c = 9;
//        printf("%d\n",a+b+c); //20
//    }
////    printf("%d",a+b+c); //error because block is local var and have accessiblity till scope
//
//    return 0;
//}

 // Name Conflict Problem

//int a =5;
//int main()
//{
//    int a =6;
//    printf("%d\n",a);  //6
//    {
//        int a = 7;
//        printf("%d\n",a);  //7
//    }
//    printf("%d\n",a);  //6
//
//    return 0;
//}
