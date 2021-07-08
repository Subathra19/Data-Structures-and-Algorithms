//Maximum dot product
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
void maxDotProduct(int a[],int b[],int n1,int n2){
    insertionSort(a,n1);
    insertionSort(b,n2);
    int p[n2];
    int j=n1-1;
    for(int i=n2-1;i>=0;i--){
        p[i]=a[j]*b[i];
        j--;
    }
    int sum=0;
    for(int i=0;i<n2;i++){
        sum=sum+p[i];
    }
    printf("Maximum dot product is: %d",sum);
}
int main()
{
    int a[]={2,3,1,7,8};//ariival time
    int b[]={3,6,7};//exit time
    int n1=sizeof(a)/sizeof(a[0]);
    int n2=sizeof(b)/sizeof(b[0]);
    maxDotProduct(a,b,n1,n2);
    return 0;
}
