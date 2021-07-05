//Convert array into zigzag fashion
#include<stdio.h>
void display(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}
void swap(int *i,int *j){
    int t=*i;
    *i=*j;
    *j=t;
}
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
//    printf("\nSorted array:");
//    display(a,n);
}
void zigzag(int a[],int n){
    insertionSort(a,n);
    int t=a[n-1];
    for(int i=1;i<n;i=i+2){
        swap(&a[i],&a[i+1]);
    }
    if(n%2==0){
        a[n-1]=t;    
    }
}
int main(){
	int a[]={4,3,7,8,6,2,1};
	int n=sizeof(a)/sizeof(a[0]);
	printf("Input array: ");
	display(a,n);
	zigzag(a,n);
	printf("\nOutput array: ");
	display(a,n);
	return 0;
}
