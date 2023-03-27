#include<stdio.h>
int main()
{
    int m = 0;
    printf("Enter the Marks to know grade:");
    scanf("%d",&m);
    if(m>85 & m<=100){
        printf("You secure A");
    }
    else if(m<85 & m>=70){
        printf("You secure B");
    }
    else if(m<70 & m>55){
        printf("YOu secure C");
    }
    else if(m<55 & m>35){
        printf("You secure D");

    }
    else{
        printf("Better try Next Time");
    }
    return 0;
}
