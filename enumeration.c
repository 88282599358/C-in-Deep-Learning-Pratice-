#include<stdio.h>

//enum day {Mon,Tue,Wed,Thru,Fri,Sat,Sun};  //0,1,2,3,4,5,6

typedef enum day {Mon,Tue,Wed,Thru,Fri,Sat,Sun} week;
int main()
{

    //First
//    printf("%d",Sat);



// Progmam 2 using loop
//    for(int i=Mon;i<=Sun;i++)
//    {
//        printf("%d\n",i);
//    }






// Program 3 using typedef
     week day ;
    day = Tue;
    printf("%d",day);








    return 0;
}
