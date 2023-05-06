#include<stdio.h>

int main()
{
    int n,fab;
    printf("Enter the value to find Fibonnaci: ");
    scanf("%d",&n);
    fab = fib(n);
    printf("%d",fab);
    return 0;
}

int fib(int n)
{

    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}
