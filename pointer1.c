#include<stdio.h>
int main()
{
//    int a = 321;
//    int *p;
//    char *q;
//
//    p = &a;
//    printf("%d\n",sizeof(*p));
//    printf("%d\n", sizeof(a));
//    printf("%d\n", sizeof(p));
//
//    q = &a;
//    printf("%d",sizeof(*q));



// Program for Pointer
//int x = 10;

    // 1) Since there is * in declaration, ptr
    // becomes a pointer variable (a variable
    // that stores address of another variable)
    // 2) Since there is int before *, ptr is
    // pointer to an integer type variable
//    int *ptr;

    // & operator before x is used to get address
    // of x. The address of x is assigned to ptr.
//    ptr = &x;
//    printf("%d\n",x);
//    printf("%p\n",*ptr);
//    printf("%p",ptr);


// Program for Pointer
    // A normal integer variable
    int Var = 10;

    // A pointer variable that holds address of var.
    int *ptr = &Var;

    // This line prints value at address stored in ptr.
    // Value stored is value of variable "var"
    printf("Value of Var = %d\n", *ptr);

    // The output of this line may be different in different
    // runs even on same machine.
    printf("Address of Var = %p\n", ptr);

    // We can also use ptr as lvalue (Left hand
    // side of assignment)
    *ptr = 20; // Value at address is now 20

    // This prints 20
    printf("After doing *ptr = 20, *ptr is %d\n", *ptr);


    return 0;
}
