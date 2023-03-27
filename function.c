#include<stdio.h>

//int hello(int a)
//{
//    printf("%d",a);
//}
//int main()
//{
//    hello(5);
//    return 0;
//}

// Program on function Calling

int add(int a, int b)
{
    a = a+10;
    b = b+20;
    int c = a+b;
    printf("%d\n",c);
}

int main()
{
    int a,b;
    printf("Enter the two value:");
    scanf("%d %d",&a,&b);
    printf("a=%d b=%d\n",a,b);
    add(a,b);
    printf("a=%d b=%d\n",a,b);
    return 0;
}
