//Find missing number in an array
#include<stdio.h>
int missing(int a[],int n){
    int x=0;
    for(int i=1;i<=n+1;i++){
        x=x^i;
    }
    int y=0;
    for(int j=0;j<n;j++){
        y=y^a[j];
    }
    return (x^y);
}    
int main(){
	int a[]={1,2,5,7,6,4};
	int n=sizeof(a)/sizeof(a[0]);
	int i= missing(a,n);
	printf("Given array:\t");
	for(int i=0;i<n;i++){
	    printf("%d\t",a[i]);
	}
	printf("\nMissing number in the array is:%d",i);
}
