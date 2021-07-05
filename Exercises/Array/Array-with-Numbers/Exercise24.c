//Kadane’s algorithm
#include <stdio.h>
void contiguousMax(int a[],int n){
    int sum=0,max=0;
    for(int i=0;i<n;i++){
        sum=sum+a[i];
        if(sum<0){
            sum=0;
        }
        if(sum>max){
            max=sum;
        }
    }
    printf("Maximum contiguous sum is: %d",max);
}
int main()
{
    int a[]={-3, -2, 7, 1, -4, 1, 7, -5};
    int n=sizeof(a)/sizeof(a[0]);
    contiguousMax(a,n);

    return 0;
}

