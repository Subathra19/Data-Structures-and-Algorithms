//Find the smallest positive number in an array
#include <stdio.h>
#include <limits.h>
void insertionSort(int a[],int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int key=a[i];
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
}
void smallestPositive(int a[],int n){
    insertionSort(a,n);
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]>=0 && a[i]<=min){
            min=a[i];
        }
    }
    printf("Minimum positive number of array:%d",min);
}
int main()
{
    int a[]={-1, 1, 0, -3, -2};
    int n=sizeof(a)/sizeof(a[0]);
    smallestPositive(a,n);
    return 0;
}

