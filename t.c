#include<stdio.h>
int fib(int n)
{
    if(n<=1){
        return n;
    }
    return fib(n-1)+ fib(n-2);
}

int main()
{
//Program For Fibonnaci Series using Recursion
int n = 20;
printf("The Fabinacci Series is: %d",fib(n));
    return 0;
}
