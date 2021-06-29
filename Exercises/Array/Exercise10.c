//For an array a[], find the maximum j – i such that a[j] > a[i]
#include <stdio.h>
int maxIndex(int a[],int n){
    int index=-1;
    for(int i=0;i<=n-1;i++){
        for(int j=n-1;j>i;j--){
            if((a[j]>a[i])&&((j-i)>index)){
                index=j-i;
            }
        }
    }
    return index;
}
int main()
{
    int a[]={9, 2, 3, 4, 5, 6, 7, 8, 18, 0};
    int n=sizeof(a)/sizeof(a[0]);
    int m=maxIndex(a,n);
    printf("The maximum index is %d",m);
    return 0;
}

