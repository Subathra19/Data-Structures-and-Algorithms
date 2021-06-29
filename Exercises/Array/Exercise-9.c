//Rotate the array elements by k times
#include <stdio.h>
void display(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}
void rotate(int a[],int n){
    int temp=a[0];
    for(int i=0;i<n-1;i++){
        a[i]=a[i+1];
    }
    a[n-1]=temp;
}
void arrayRotate(int a[],int n,int k){
    for(int i=1;i<=k;i++){
        rotate(a,n);
    }
}
int main(){
    int a[]={1,2,3,4,5,6};
    int k;
    int n=sizeof(a)/sizeof(a[0]);
    printf("Enter the number of times to rotate an array:");
    scanf("%d",&k);
    printf("\nInput array:\n");
    display(a,n);
    arrayRotate(a,n,k);
    printf("\nArray after being rotated by %d times:\n",k);
    display(a,n);
    return 0;
}

