//Find median of an array
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
void median(int a[],int n){
    insertionSort(a,n);
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    int median=0;
    int h=n-1;
    if(h%2==0){
        median=a[h/2];
    }else{
        int mid=(h-1)/2;
        median=(a[mid]+a[mid+1])/2;
    }
    printf("\nMedian: %d",median);
}
int main()
{
    int a[]={5,15,1,15};
    int n=sizeof(a)/sizeof(a[0]);
    median(a,n);
    return 0;
}
