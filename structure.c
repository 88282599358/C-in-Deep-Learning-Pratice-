#include<stdio.h>

//  struct test
//  {
//      char a;
//      int b;
//      float c;
//  };
//int main()
//{
//struct test t1, t2;
//printf("%d",sizeof(t2));


//    t1.a = 'A';
//    t2.a = '@';
//  printf("%d\n",t2.a);
//  printf("%d\n",t1.a);

// And it is going on for all of the struct



// Taking Value from user
//printf("Enter the character value to store:");
//scanf("%c",&t1.a);
//
//printf("Enter the integer value to store:");
//scanf("%d",&t1.b);
//
//printf("Enter the float value to store:");
//scanf("%f",&t1.c);
//
//
//printf("%c\n %d\n %f\n", t1.a, t1.b, t1.c);







//    return 0;
//}


//Designator Structure Initialization
//struct test
//  {
//      char a;
//      int b;
//  }t1={.a='A', .b=5};
//int main()
//{
//struct test t2 = {.b=6, .a='@'};  // please check notebook for better understanding
//printf("%c\n %d\n %c\n %d\n",t1.a, t1.b, t2.a, t2.b);
//return 0;
//}




typedef struct demo
{
    int a;
    float b;
}demo;

demo hello( demo d2)
{
    d2.a = 10;
    d2.b = 10.56f;

    return d2;
};

int main()
{
     demo d1,d3;
    d1.a = 5;
    d1.b = 5.5;
    d3 = hello(d1);

    printf("%d\n %f", d3.a, d3.b);

    return 0;

}
