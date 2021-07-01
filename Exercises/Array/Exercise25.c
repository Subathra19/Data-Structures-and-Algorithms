//Count pairs with given sum
#include <stdio.h>
void countPairs(int a[],int n,int k){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((a[i]+a[j])%k==0){
                count++;
            }
        }
    }
    printf("Total number of pairs whose sum is divisible by %d is: %d",k,count);
}
int main()
{
    int k;
    int a[]={5, 9, 36, 74, 52, 31, 42 };
    int n=sizeof(a)/sizeof(a[0]);
    printf("Enter k value:");
    scanf("%d",&k);
    countPairs(a,n,k);
}

