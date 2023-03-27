#include<stdio.h>
int main()
{

//    printf("Pointer:Show th basic Declaration of Pointer\n");
//    int m=10,n=1,o;
//    int *z =&m;
//    int *y = &n;
//    int *x = &o;
//    printf("z stores the address of m:%p\n",z);
//    printf("*z stores the value of m:%d\n",*z);
//    printf("&m is the address of m:%p\n",&m);
//    printf("&n stores the value of n:%d\n",n);
//    printf("&o stores the address of o:%p\n",&o);
//     printf("&z stores the address of z:%p\n",&z);



// Add two number using Pointer
    int a,b,*z,*y,sum;
    printf("Input the first number: ");
    scanf("%d",&a);
    printf("Input the second number: ");
    scanf("%d",&b);
    z = &a;
    y = &b;
    sum = *z + *y;
    printf("The sum of two entered number is: %d",sum);
    return 0;
}
