//Sort an array of 0s, 1s and 2s
#include <stdio.h>
void display(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}
void swap(int* a,int* b){
    int t=*a;
    *a=*b;
    *b=t;
}
void sort(int a[],int n){
    int mid=0;
    int l=0;
    int h=n-1;
    while(mid<=h){
        switch(a[mid]){
            case 0:
                swap(&a[mid],&a[l]);
                l++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(&a[mid],&a[h]);
                h--;
                break;
        }
    }
}
int main(){
    int a[]={1,1,0,2,2,0,0,0,1,2};
    int n=sizeof(a)/sizeof(a[0]);
    printf("Input array:\n");
    display(a,n);
    sort(a,n);
    printf("\nSorted array:\n");
    display(a,n);
    return 0;
}
