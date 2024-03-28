#include <stdio.h>
 
// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
// 2 3 4 10 40

int binarySearch(int arr[], int l, int r, int x)
{
    if(r >= l)
    {
        int mid = l+(r-l)/2;
    
        if(arr[mid] == x) return mid;

        if(arr[mid] > x) return binarySearch(arr,l,mid-1,x);

        return binarySearch(arr,mid+1,r,x);
    }

    return -1;

}
 
/*
x = 10
if 10 is not in arr

2 3 4 40 , mid = 1 : 3
4 40 , mid = 1 : 40
4 , mid = 0 : 4

hence , l=r=mid, not found

*/

// Driver code
void main()
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d \n",n);
    int x = 10;
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1)
        ? printf("Element is not present in array")
        : printf("Element is present at index %d", result);
    // return 0;
}


// if (r >= l) {
//         int mid = l + (r - l) / 2;
 
//         // If the element is present at the middle
//         // itself
//         if (arr[mid] == x)
//             return mid;
 
//         // If element is smaller than mid, then
//         // it can only be present in left subarray
//         if (arr[mid] > x)
//             return binarySearch(arr, l, mid - 1, x);
 
//         // Else the element can only be present
//         // in right subarray
//         return binarySearch(arr, mid + 1, r, x);
//     }
 
//     // We reach here when element is not
//     // present in array
//     return -1;