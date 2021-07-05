//Find subset of elements of an array whose sum adds up to a given number
#include<stdio.h>
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
void keyPair(int a[],int n,int sum){
    insertionSort(a,n);
    int l=0;
    int r=n-1;
    while(l<=r){
        int cur_sum=a[l]+a[r];
        if(cur_sum==sum){
            printf("Given array has two elements %d and %d with given sum %d",a[l],a[r],sum);
            return;
        }
        if(cur_sum<sum){
            l++;
        }
        if(cur_sum>sum){
            r--;
        }
    }
}
int main(){
	int a[]={1, 4, 45, 6, 10, -8};
	int n=sizeof(a)/sizeof(a[0]);
	int sum;
	printf("Enter sum value: ");
	scanf("%d",&sum);
	keyPair(a,n,sum);
	return 0;
}

