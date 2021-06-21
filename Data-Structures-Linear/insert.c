#include<stdio.h>
//Function to print elements of an array
void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}
void main(){
    int a[100];
    int x,p;
    int n=10;
    for (int i=0; i<n; i++){
        a[i] = i + 1;
    }
    printf("\nInput array:");
    printArray(a,n);
    printf("\nEnter the element to be inserted:");
    scanf("%d",&x);
    printf("\nEnter the position:");
    scanf("%d",&p);
    n++;
    //Pushes the elements one index ahead to insert the element at correspomding position 
    for(int i=n-1;i>=p;i--){
        a[i]=a[i-1];
    }
    a[p]=x;
    printf("\nOutput array:");
    printArray(a,n);
}
