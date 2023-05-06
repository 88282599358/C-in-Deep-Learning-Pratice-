#include <stdio.h>
// A recursive binary search function. It returns location of x in
// given array arr[l..r] is present, otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
if (r >= l)
{
int mid = l + (r - l)/2;
// If the element is present at the middle itself
if (arr[mid] == x) return mid;
// If element is smaller than mid, then it can only be present
// in left subarray
if (arr[mid] > x) return binarySearch(arr, l, mid-1, x);
// Else the element can only be present in right subarray
return binarySearch(arr, mid+1, r, x);
}
// We reach here when element is not present in array
return -1;
}
int main(void)
{
int arr[] = {2, 3, 4, 10, 40};
int n = sizeof(arr)/ sizeof(arr[0]);
int x = 10;
int result = binarySearch(arr, 0, n-1, x);
(result == -1)? printf("Element is not present in array")
: printf("Element is present at index %d", result);
return 0;
}
/*The binarySearch function takes four arguments: an array of integers arr,
the left and right indices of the current subarray being searched l and r, and the value x that is being searched for.

The function works by first calculating the middle index mid of the current subarray using integer division.
 It then checks if the value at arr[mid] is equal to x. If it is, the function returns the index mid.

If x is not equal to arr[mid], the function checks if x is less than arr[mid].
 If it is, the function calls itself recursively with the left subarray by passing the l index and mid-1 index to the function.

If x is greater than arr[mid],
the function calls itself recursively with the right subarray by passing the mid+1 index and r index to the function.

The main function initializes an array arr with some sorted values, sets the value x to be searched for, and calls the binarySearch function to search for x in arr. If x is found, the index where it is found is printed.
Otherwise, a message is printed indicating that x is not present in the array.*/
