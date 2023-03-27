#include<stdio.h>
int main()
{
//    char fname[5];
//    char lname[5];
//    printf("Enter You Name: ");
//    scanf("%s",fname);
//    printf("%s",fname);
//    gets(lname);
//    puts(lname);

 // Program for Reading a characters

 int c,i=0,n;
 char a[n];
 printf("Enter a Number: ");
 scanf("%d",&n);
 while((c=getch())!='\n')
 {
     if(i<n-1)
     {
         a[i++]=c;

     }
     else
     {
        break;
     }
 }
 a[i] ='\0';
// printf("%c",a[i]);






    return 0;
}
