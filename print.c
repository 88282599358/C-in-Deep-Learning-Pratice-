#include<stdio.h>

int main()
{

//   Integers
//    printf("%d",25);  //signed decimal
//    printf("%d",25u);   //unsigned decimal write U or u
//    printf("%d",25l);     //long intger
//    printf("%d",25ul);      //unsigned long
//    printf("%d",25ll);    //long long
//    printf("%d",25uLL);    //unsigned long long

//    Octal :- It stated with 0 and its range is only 0 to 7
//    printf("%d",025);       //we cannot write 8,9 after 025

//    Hexadecimal:- Start with 0x can can go to 9 and from A(10) to F(15)

//    printf("%d",0x25AF);


//  Binary:- it start with 0b
//    printf("%d",0b101);



//  Floating
//    printf("%d",25.2);  //consider as double
//    printf("%f",25.2f); //float
//    printf("%f",25.2l);  //long double



// Character Constant
//  Single Character Constant
//    printf("%d\n",'A');
////    printf("%c\n",'A');

// Mutliple Charcter Constant

//    printf("%s","Hello Sachin");



// Size of Literals:- Simpliy do same thing but write sizeof()

printf("%d\n",sizeof(25.5)); //8
printf("%d\n",sizeof(25));  //4
printf("%d\n",sizeof(25.5f)); //4
printf("%d\n",sizeof(25.5)); //8 because of it is double
printf("%d\n",sizeof('A'));   //4
printf("%d\n",sizeof("Hello Moto"));  //11 because it take \0 at last


}
