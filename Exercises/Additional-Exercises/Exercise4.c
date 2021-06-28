/*Find two prime numbers with given sum
	According to Goldbach’s conjecture, every even integer greater than 2 can be represented as sum of 2 prime numbers 
*/
#include<stdio.h>
#include<stdlib.h>
int prime(int n){
    if(n==0||n==1){
        return 0;
    }
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
           return 0; 
        }
    }
    return 1;
}
void twoPrime(int a[],int n,int sum){
    int l=0;
    int r=n-1;
    while(l<=r){
        int cur_sum=a[r]+a[l];
        if(cur_sum==sum){
            printf("%d\t%d",a[l],a[r]);
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
	int n;
    printf("Enter the value:");
    scanf("%d",&n);
    int count=0;
    int *a=(int *)malloc((count+1)*sizeof(int));
    for(int i=0;i<=n;i++){
        int chck=prime(i);
        if(chck){
            a[count]=i;
            count++;
        }
    }
    printf("Two prime numbers whose sum is %d are:,n\n");
    twoPrime(a,count,n);
    return 0;
}

