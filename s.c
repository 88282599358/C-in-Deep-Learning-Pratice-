#include<stdio.h>

int main()
{

int ch,a,b;
do{
    printf("\nCalculator");
    printf("\n 1.Addition \n 2.Subtraction \n 3.Exit\n");
    scanf("%d",&ch);
    if(ch == 1){
        scanf("%d %d",&a,&b);
        printf("%d", a+b);
    }
    if(ch == 2){
        scanf("%d %d",&a,&b);
        printf("%d", a-b);
    }
       if(ch == 3){
       break;
    }
} while (1);

return 0;
}
