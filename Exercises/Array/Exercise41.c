//Three way partitioning
#include <stdio.h>
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
void threeWay(int a[],int n,int l,int h){
    int start=0;
    int end=n-1;
    int i=0;
    while(i<=end){
        if(a[i]<l){
            swap(&a[i],&a[start]);
            start++;
            i++;
        }
        if(a[i]>h){
            swap(&a[i],&a[end]);
            end--;
        }else{
            i++;
        }
    }
}
void display(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
int main(){
	int a[]={1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32};
	int n=sizeof(a)/sizeof(a[0]);
	int l,h;
	printf("Enter the range:\n");
	printf("Lower value: ");
	scanf("%d",&l);
	printf("\nHigher value: ");
	scanf("%d",&h);
	printf("\n Input array:\n");
	display(a,n);
	threeWay(a,n,l,h);
    printf("\nArray after partitioning:\n");
    display(a,n);
    return 0;
}
