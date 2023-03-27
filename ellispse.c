#include<stdio.h>
#include<stdarg.h>
// Find the summation using ellispe
//int hello(int c, ...)
//    {
//        va_list list;
//        int sum = 0;
//        va_start(list,c);
//        for(int i =1;i<=c;i++)
//        {
//            sum = sum + va_arg(list,int);
//            printf("%d\n",sum);
//        }
//    }
//int main()
//{
//    hello(5,1,2,3,4,5);
//    return 0;
//}



//// Program on Ellispe for summation
//
//int sum(int, ...); //Declaration
//
//int main(void) {
//   printf("Sum of 10, 20 and 30 = %d\n",  sum(3, 10, 20, 30) );
//   printf("Sum of 4, 20, 25 and 30 = %d\n",  sum(4, 4, 20, 25, 30) );
//
//   return 0;
//}
//
//int sum(int num_args, ...) {
//   int val = 0;
//   va_list ap;
//   va_start(ap, num_args);
//   for(int i = 0; i < num_args; i++) {
//      val += va_arg(ap, int);
//   }
//   va_end(ap);
//
//   return val;
//}




// C inline function

static inline void hello()
{
    printf("Hello World");
}
int main()
{
    hello();
    return 0;
}
