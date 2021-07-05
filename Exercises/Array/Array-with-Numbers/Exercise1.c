//Find Sub array with given sum
#include <stdio.h>
int arraySum(int a[],int n,int sum){
    int start_index=0,end_index=0;
    int cur_sum=a[0];
    for(int i=1;i<n;i++){
        if(cur_sum==sum){
            end_index=i-1;
            break;
        }
        if(cur_sum<sum){
            cur_sum=cur_sum+a[i];
        }
        while(cur_sum>sum && start_index<i-1){
            cur_sum=cur_sum-a[start_index];
            start_index++;
        }
    }
    printf("Sum found between indexes: %d and %d", start_index,end_index);
}
int main (){
    int sum;
    int a[]={1, 4, 0, 0, 3, 10, 5};
    int n=sizeof(a)/sizeof(a[0]);
    printf("Enter the sum value:");
    scanf("%d",&sum);
    arraySum(a,n,sum);
}
