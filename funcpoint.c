#include<stdio.h>
//int hello()
//{
//    printf("Hello Function");
//}
//int main()
//{
//
//    int (*p)() = hello();
//    (*p)();
////    hello();
//    return 0;
//}


// Eg 2
//void hello()
//{
//    printf("Hello How are you!!");
//}
//int main()
//{
//// Here use int or void it's fine
//    void (*p)();
//    p = &hello;
//    (*p)();
//    return 0;
//}



// Pointer to pointer

//int main()
//{
//
//    int a = 5;
//    int *p = &a;
//    int **q = &a;
////    p =&a;
////    q =&a;
//    q =&p;
//
//    printf("%d\n",**q);
//    printf("%p\n",*q);
//    printf("%p\n",q);
//
//    return 0;
//}


int hello(int *p){
p[0]=10;
}
int main()
{
    int a =5;
    hello(&a);
    printf("%d",a);
    return 0;
}
