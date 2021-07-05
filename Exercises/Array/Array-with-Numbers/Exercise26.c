//Count pairs in array whose sum is divisible by k
#include<stdio.h>
void countPairs(int a[], int n, int sum) 
{ 
    int count = 0; 
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (a[i]+a[j] == sum){
                count++;
            }
        }
    } 
    printf("The number of pairs in the array whose sum is %d are: %d",sum,count); 
} 
int main(){
    int sum;
	int a[]={1, 5, 7, -1, 5};
	int n=sizeof(a)/sizeof(a[0]);
	printf("Enter sum value:");
	scanf("%d",&sum);
	countPairs(a,n,sum);
	return 0;
}
