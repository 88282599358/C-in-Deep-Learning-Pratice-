// Printing a matrix in C


#include<stdio.h>
int main()
{
//    int arr[3][3],i,j;
//    for(i=0;i<3;i++)
//    {
//        for(j=0;j<3;j++)
//        {
//            printf("Enter the[%d][%d]:",i,j);
//            scanf("%d",&arr[i][j]);
//        }
//    }
//    printf("\n Printing the Element.. \n Please Wait..\n");
//    for(i=0;i<3;i++)
//    {
//        printf("\n");
//        for(j=0;j<3;j++)
//        {
//            printf("%d\t",arr[i][j]);
//        }
//    }




// Printing the sorting element
//    int i,j,k;
//    int a[10] = {101,25,65,48,89,98,78,87,23,45};
//    for(i=0;i<10;i++)
//    {
//        for(j=0;j<10;j++)
//        {
//            if(a[j]<a[i])
//            {
//                k = a[i];
//                a[i] = a[j];
//                a[j] = k;
//            }
//        }
//    }
//    printf("Printing th sorting Please wait....\n");
//    for(i=0;i<10;i++)
//    {
//        printf("%d\n",a[i]);
//    }



// Logic and Thinking in C
// Problem No.1
//int a[10];
//int i;
//    printf("Input 10 elements in the Array:\n");
//    for(i=0;i<=10;i++)
//    {
//        printf("element- %d: ",i);
//        scanf("%d",&a[i]);
//    }
//     printf("\nElement in Array are:");
//    for(i=0;i<=10;i++)
//    {
//    printf("%d",a[i]);
//
//    }
//    printf("\n");




//int a[3];
//int i;
//int l = sizeof(a)/sizeof(a[0]);
//    printf("Input 3 elements in the Array:\n");
//    for(i=0;i<l;i++)
//    {
//        printf("element- %d: ",i);
//        scanf("%d",&a[i]);
//    }
//     printf("\n Element in Array are:");
//    for(i=0;i<l;i++)
//    {
//    printf("%d",a[i]);
//
//    }
//    printf("\n Array in Reverse Order:");
//  for(i=l-1;i>=0;i--)
//  {
//        printf("%d",a[i]);
//  }


//Program to find the sum of all array
//int a[100];
//int i,n,sum=0;
//    printf("Input the Array to sum:");
//    scanf("%d",&n);
//
//    printf("Input the number of element to be stored in \n",n);
//    for(i=0;i<n;i++)
//    {
//        printf("element- %d: ",i);
//        scanf("%d",&a[i]);
//    }
//
//    for(i=0;i<n;i++)
//    {
//    sum += a[i];
//
//    }
//printf("Sum of All Array is %d",sum);



// Program
//int arr1[100];
//	int arr2[100];
//	int arr3[100];
//    int n,mm=1,ctr=0;
//    int i, j;
//
//
//       printf("\n\nCount total number of duplicate elements in an array:\n");
//       printf("---------------------------------------------------------\n");
//
//       printf("Input the number of elements to be stored in the array :");
//       scanf("%d",&n);
//
//       printf("Input %d elements in the array :\n",n);
//       for(i=0;i<n;i++)
//        {
//	      printf("element - %d : ",i);
//	      scanf("%d",&arr1[i]);
//	    }
///*----------------- copy in other array ------------------------------------*/
//		for(i=0;i<n; i++)
//        {
//		arr2[i]=arr1[i];
//		arr3[i]=0;
//        }
///*------------------- mark the elements are duplicate -------------------------*/
//	for(i=0;i<n; i++)
//        {
//		for(j=0;j<n;j++)
//			{
//				if(arr1[i]==arr2[j])
//				{
//				arr3[j]=mm;
//				mm++;
//				}
//			}
//			mm=1;
//        }
///*--------------- Prints the array ------------------------------------*/
//   for(i=0; i<n; i++)
//    {
//      if(arr3[i]==2){ctr++;}
//    }
//      printf("The total number of duplicate elements found in the array is: %d \n", ctr);
//
//	  printf("\n\n");


// Program to find unique value form array


 int arr1[100], arr2[100], arr3[200];
    int s1, s2, s3;
    int i, j, k;


       printf("\n\nMerge two arrays of same size sorted in decending order.\n");
       printf("------------------------------------------------------------\n");

       printf("Input the number of elements to be stored in the first array :");
       scanf("%d",&s1);

       printf("Input %d elements in the array :\n",s1);
       for(i=0;i<s1;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }


       printf("Input the number of elements to be stored in the second array :");
       scanf("%d",&s2);

       printf("Input %d elements in the array :\n",s2);
       for(i=0;i<s2;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr2[i]);
	    }

    /* size of merged array is size of first array and  size of second array */
    s3 = s1 + s2;
/*----------------- insert in the third array------------------------------------*/
    for(i=0;i<s1; i++)
        {
            arr3[i] = arr1[i];
         }
     for(j=0;j<s2; j++)
        {
            arr3[i] = arr2[j];
            i++;
        }
/*----------------- sort the array in decending order ---------------------------*/
   for(i=0;i<s3; i++)
        {
           for(k=0;k<s3-1;k++)
             {

                if(arr3[k]<=arr3[k+1])
                 {
                   j=arr3[k+1];
                   arr3[k+1]=arr3[k];
                   arr3[k]=j;
                 }
              }
         }

/*--------------- Prints the merged array ------------------------------------*/
     printf("\nThe merged array in decending order is :\n");
    for(i=0; i<s3; i++)
    {
        printf("%d   ", arr3[i]);
    }
	printf("\n\n");
}
    return 0;
}

