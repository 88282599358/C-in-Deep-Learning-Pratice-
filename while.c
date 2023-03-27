#include<stdio.h>
int main()
{
//    //Program
//    int i =0;
//    while(i<=10){
//        printf("%d\n",i);
//        i++;
//    }

//    int i=0,num=0;
//    printf("Enter the Name:");
//    scanf("%d",&num);
//    while(i<=10){
//    printf("%d\n",(num*i));
//    i++;
//    }

//    int a,c=0;
//    printf("Enter the Number:");
//    scanf("%d",&a);
//    while(a>0){
//        a=a/10;
//        c++;
//    }
//    printf("%d",c);



// Program:- Sum of digit in a Number
int a = 0,sum=0;
printf("Enter the Number:");
scanf("%d",&a);
while(a>0){
    sum = sum + a%10;
    a = a/10;
}
printf("%d", sum);


    return 0;
}
