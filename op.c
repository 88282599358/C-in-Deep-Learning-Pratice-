#include<stdio.h>
#include<conio.h>
int main()
{
    float mynum =s1,s2,s3,s4,s5;
    printf("Enter the 5 marks: ");
    scanf("%f",&s1);
    scanf("%f",&s2);
    scanf("%f",&s3);
    scanf("%f",&s4);
    scanf("%f",&s5);
    int total = s1+s2+s3+s4+s5;
    int per  = total/500*100;
    printf("%d",per);

    return 0;
}

char sach[30]= "sachin";
