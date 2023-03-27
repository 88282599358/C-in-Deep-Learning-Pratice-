#include<stdio.h>
int main()
{
    int a = 0;
    printf("enter the number:");
    scanf("%d",&a);
    if (a == 10)
    {
        printf("this is equal to 10");
    }
    else if(a == 50)
    {
        printf("this is equal to 50");
    }
    else if(a == 100)
    {
        printf("This is equal to 100");
    }
    else
    {
        printf("This is not equal to 10,50,100 ");
    }
    return 0;
}
