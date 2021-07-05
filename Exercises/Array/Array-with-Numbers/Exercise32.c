//Find the Kth smallest element in an unsorted array
#include <stdio.h>
void insertionSort(int a[],int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int key=a[i];
        while(j>=0&&a[j]>key){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
}

void smallestElement(int a[],int n,int k){
    insertionSort(a,n);
    if(k<n){
        printf("%dth smallest element of array is: %d",k,a[k-1]);
    }
    
}
int main()
{
    int k;
    int a[]={7, 10, 4, 3, 20, 15};
    int n=sizeof(a)/sizeof(a[0]);
    printf("Enter k:");
    scanf("%d",&k);
    smallestElement(a,n,k);
    
}
