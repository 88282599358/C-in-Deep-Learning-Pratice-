#include<stdio.h>

// Refer Book For more Details
typedef struct test
{
    int a[3];
    float b;
}demo;


int main()
{
    demo t;
    for(int i=0; i<=2; i++)
    {
        printf("Enter the number for array: ");
        scanf("%d",&t.a[i]);
    }
        printf("Please Enter one more Array: ");
        scanf("%f", &t.b);
    for(int i=0; i<=2; i++)
    {
        printf("%d\n",t.a[i]);
    }
    printf("%f\n",t.b);
    return 0;
}
