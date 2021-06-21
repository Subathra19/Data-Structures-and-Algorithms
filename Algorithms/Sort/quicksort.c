#include<stdio.h>
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int partition(int a[],int l,int r){
    int i=l-1;
    int pivot=a[r];
    for(int j=l;j<r;j++){
        if(a[j]<pivot){
            i++;
            swap(&a[i],&a[j]);
        }        
    }
    swap(&a[i+1],&a[r]);
    return i+1;
}
void quickSort(int a[],int l,int r){
    if(l<r){
        int p=partition(a,l,r);
        quickSort(a,l,p-1);
        quickSort(a,p+1,r);
    }
}
void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}
void main(){
    int a[]={4,1,2,1,3,5,5};
    int n=sizeof(a)/sizeof(a[0]);
    printf("\nInput array:");
    printArray(a,n);    
    quickSort(a,0,n-1);
    printf("\nAfter sorting:");
    printArray(a,n);
}
