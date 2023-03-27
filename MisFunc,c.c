#include<stdio.h>
int main()
{

// & Referencing Opertors
// We can use %x or %p will fine
//    int a = 7;
//    printf("%x\n",&a);
//    unsigned short int b = 7;
//    printf("%p\n",&b);


// * Derefernce Op
//int a = 5;
//printf("%d", *&a);





// Sizeof Opertors
//    int a = 5;
//    printf("%lu",sizeof(a));


//    int b = 5;
//    printf("%zu",sizeof(b));
//    printf("%zu",sizeof(int));


// Ternary Opertors
//printf("%d", 5 < 6 ? 5+6: 5-6);
int a=5,b=6;
printf("%d", !a ? a:b);
    return 0;
}
