//Find two elements in an array whose sum is close to zero
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
void insertionSort(int a[],int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int key=a[i];
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}
void sumCloseToZero(int a[],int n){
    if(n<2){
        printf("Invalid");
        return;
    }
    insertionSort(a,n);
    int l=0;
    int r=n-1;
    int sum=0;
    int min_sum=INT_MAX;
    int l_min=0,r_min=0;
    while(l<r){
        sum=a[l]+a[r];
        if(abs(sum)<abs(min_sum)){
            min_sum=sum;
            l_min=l;
            r_min=r;
        }
        if(sum<0){
            l++;
        }
        if(sum>0){
            r--;
        }
    }
    printf("\nTwo elements with sum closest too zero are: %d and %d",a[l_min],a[r_min]);
}
void display(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}
int main(){
    int a[]={1, 60, -10, 70, -80, 85};
    int n=sizeof(a)/sizeof(a[0]);
    printf("Input array:\n");
    display(a,n);
    sumCloseToZero(a,n);
    return 0;
}
