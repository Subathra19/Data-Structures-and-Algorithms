//For an array a[] of size N and an integer K. Find the maximum for each and every contiguous subarray of size K.
/*
Input:
N = 9, K = 3
a[] = 1 3 7 1 4 2 5 1 6
Output: 
7 7 7 5 5 6 
Explanation: 
1st contiguous subarray = {1 3 7 1} Max = 7
2nd contiguous subarray = {3 7 1 4} Max = 7
3rd contiguous subarray = {7 1 4 2} Max = 7
4th contiguous subarray = {1 4 2 5} Max = 5
5th contiguous subarray = {4 2 5 1} Max = 5
6th contiguous subarray = {2 5 1 6} Max = 6
*/
#include <stdio.h>
void maxSubarray(int a[],int n,int k){
    int j, max;  
    //i gives number of sub arrays
    for (int i = 0; i <= n - k; i++){  
        max = a[i];  
        for (j = 1; j < k; j++){  
            if (a[i + j] > max){
               max = a[i + j]; 
            }  
        }  
        printf("%d\t",max);  
    }  
}
int main()
{
    int k;
    int a[]={1, 3, 7, 1, 4, 2, 5, 1, 6};
    int n=sizeof(a)/sizeof(a[0]);
    printf("Enter subarray size:");
    scanf("%d",&k);
    printf("Maximum of all sub arrays of size %d is: \n",k);
    maxSubarray(a,n,k);

    return 0;
}
