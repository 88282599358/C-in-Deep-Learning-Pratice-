#include<Stdio.h>
int main()
{

//    int m=10,n,o;
//    int *z =&m;
//    printf("%d\n",z);
//    printf("%llu\n",*z);
//    printf("%llu\n",&m);
//    printf("%llu\n",&n);
//    printf("%llu\n",&o);
//    printf("%llu\n",&z);



// Program 2
//    int m = 29;
//    int *p = &m;
//    printf("%Address of m or p: llu\n",p);
//    printf("Value of m: %d\n",m);

//    printf("\nNow ab is assigned with the address of m:\n");
//    int m = 29;
//    int *ab = &m;
//    printf("Address of Pointer ab:%d\n",&ab);
//    printf("Content of Pointer ab:%d\n",*ab);
//
//    m = 34;
//    printf("Address of Pointer ab:%d\n",&ab);
//    printf("Content of Pointer ab:%d\n",*ab);
//
//    *ab = 7;
//    printf("Address of m:%d\n",&ab);
//    printf("Value of m:%d\n",*ab);




// Program No3
    int m = 300;
    float fx = 300.00;
    char cx = 'z';
    int *p = &m;
    float *q = &fx;
    char *r = &cx;

    printf("\nUsing & operators\n");
    printf("Address of m:%p\n",&m);
    printf("Address of fx:%p\n",&fx);
    printf("Address of cx:%p\n",&cx);

    printf("\n using & and * Operators:\n");
    printf("Value at Address of m:%d\n",*(&m));
    printf("Value at Address of fx:%lf\n",*(&fx));
    printf("Value at Address of cx:%c\n",*(&cx));

    printf("\n Using only Pointer variable:\n");
    printf("Address of m:%p\n",*p);
    printf("Address of fx:%p\n",*q);
    printf("Address of cx:%p\n",*r);

    printf("\n Using only Pointer Operators:\n");
    printf("Value at Address of m:%d\n",*p);
    printf("Value at Address of fx:%lf\n",*q);
    printf("Value at Address of cx:%c\n",*r);


    return 0;
}
