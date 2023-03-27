#include<stdio.h>
//printf() and scanf()
int main()
{

//Program No 1
//    int a = 8;
//    int b = 9;
//    int c = a + b; //17
//    printf("%d",c);


//Program 2
//    int circle = 20;
//    int result = circle * circle * 3.142;
//    printf("%d", result);


//Program 3 : Perform all Algorithm
//    int num1 = 4;
//    int num2 = 8;
//    printf("%d\n",num1 + num2);  //12
//    printf("%d\n",num1 - num2);  // -4
//    printf("%d\n",num1 * num2);  // 32
//    printf("%d\n",num1 / num2);  //0


//Program 4 : If, Else
//    int a = 50;
//    if (a >= 35)
//        {
//            printf("You are Pass");
//        }
//    else
//        {
//            printf("You are Fail");
//        }

//Program 5 : Greatest Number
    int num_1;
    int num_2;
    printf("Enter the Number1: ");
    scanf("%d", &num_1);
    printf("Enter the Number2: ");
    scanf("%d", &num_2);
    if (num_1 > num_2){
        printf("Num 1 is Greater");
    }
    else{
        printf("Num 2 is Greater");
    }



    return 0;
}
