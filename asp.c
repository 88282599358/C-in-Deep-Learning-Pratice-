#include<stdio.h>
int main()   //void instead of int
{

//    int a=1;   //initilzation
//    //inside loop
//    while(a<=10){
//        printf("%d\n",a);  //1  //2 //10
//        a++;   //+1 = 2, //2 +1 = 3  //11
//    }




//Program 2
//    int a=0;
//    while(a<=100){
//        a =a+2;
//        printf("%d\n",a);
//    }



//Program 3
//    int b=100;
//    while(b>=1){
//        printf("%d\n",b);
//        b--;
//    }


//Program 4
//    int a=1;
//    while(a<=100){
//        printf("%d\n",a);  //1
//        a =a+2; //1+2 =3
//    }

//// Program 5
//
//    int n=1,s=0;
//    while(n<=10){
//        n = n+1;
//        printf("%d\n",s); //0  //3
//        s = s+n;  //0+2=2  //2 + 3 = 5
//    }


// Program 6

    int n,s;
    printf("Enter the Number to Reserve: ");
    scanf("%d",&n);
    while(n>0){
        s = n%10;
        printf("%d\n",s);
        n = n/10;
    }


    return 0;
}
