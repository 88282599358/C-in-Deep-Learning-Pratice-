#include<stdio.h>
int main()
{
int a,b,c;
    do{
    printf("1.Addition\n 2.Subtraction \n 3.Multiplication \n 4.Division\n 5.Exit\n");
    scanf("%d",&c);
        if(c == 1)
        {
            scanf("%d %d",&a,&b);
            printf("%d\n",a+b);
//            break;
        }
         if(c == 2)
        {
            scanf("%d %d",&a,&b);
            printf("%d\n ",a-b);
//            break;
        }
         if(c == 3)
        {
            scanf("%d %d",&a,&b);
            printf("%d\n",a*b);
//            break;
        }
        if(c == 4)
        {
            scanf("%d %d",&a,&b);
            printf("%d\n ",a/b);
//            break;
        }
         if (c == 5) {
            printf("Sorry Please check correct Number\n");
            break;
        }
    }while(1);
    return 0;
}
