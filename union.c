#include<stdio.h>
union gender
{
    int male;
    int female;

};


// Program on union in C
//int main()
//{
//    union gender p1;
//    printf("Enter 1 for male:");
//    scanf("%d", &p1.male);
//    printf("%d",p1.male);
//    return 0;
//}


//    printf("%d",p1.male);

// Program 2 on Union in C
//int hello(union gender p2)
//{
//        printf("Enter 1 for male:");
//        scanf("%d", &p2.male);
//        printf("%d",p2.male);
//}
//
//int main()
//{
//    union gender p1={.male = 1};
//    hello((union gender){.male=1});
//
//    return 0;
//}



// Program 3 on Union using return in C
union gender  hello()
{
        union gender p2 = {.male=1};
        printf("Enter 1 for male:");
        scanf("%d", &p2.male);
        printf("%d",p2.male);
        return p2;
}

int main()
{
    union gender p2;
        p2 = hello();
    return 0;
}
