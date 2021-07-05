//Longest increasing subsequence in an array
#include <stdio.h>
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
int longestSeq(int a[],int n){
    insertionSort(a,n);
    int count=1;
    for(int i=0;i<n;i++){
       // printf("%d\t",a[i]);
        if((a[i+1]-a[i])!=1){
            break;
        }
        count++;
    }
    return count;
}
int main()
{
    int a[]={1,9,3,10,4,20,2};
    int n=sizeof(a)/sizeof(a[0]);
    int res=longestSeq(a,n);
    printf("Length of longest consecutive subsequence is: %d",res);
    return 0;
}
