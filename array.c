#include<stdio.h>
int main()
{
     int a[5];
     int i;
     printf("ENTER THE NUMBER FOR ARRAY:\n");
     for (i=0;i<=5;i++)
     {
         scanf("%d\n",&a[i]);

     }
     for(i=0;i<=5;i++)
     {
         printf("%d\n",a[i]);
     }
    return 0;
}
