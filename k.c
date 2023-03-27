#include<stdio.h>
int main()
{
//    int a = 0;
//    while(a<=10){
////        printf("%d\n",a);
//        printf("This is C \n");
//        a++;
//    }


int a=1,b=0;
printf("Enter the Number for Table:");
scanf("%d",&b);
while(a<=10){
    printf("%d\n",a*b);
    a++;
}
    return 0;
}
