//Surpasser count
/*
A surpasser of an element in an array,a[] is a greater element to its right, (i.e.) a[j] is a surpasser of a[i] if i < j and a[i] < a[j].
*/
#include<stdio.h>
void display(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
void surpasserCount(int a[],int n){
	int k=0;
	int s[n];
	for(int i=0;i<n;i++){
	    int count=0;
		for(int j=i+1;j<n;j++){
			if(a[j]>a[i]){
				count++;
			}
		}
		s[k]=count;
		k++;
	}
	printf("\nOutput array:\n");
	display(s,n);
}
int main(){
	int a[]={2, 7, 5, 3, 0, 8, 1};
	int n=sizeof(a)/sizeof(a[0]);
	printf("\nInput array:\n");
	display(a,n);
	surpasserCount(a,n);
	return 0;
}
