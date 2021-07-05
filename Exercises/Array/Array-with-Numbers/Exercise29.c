//Count inversions in an array
#include <stdio.h>
void inversionCount(int a[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                count++;
            }
        }
    }
    printf("Inversion count of array is: %d",count);
}
int main()
{
    int a[]={2,4,1,3,5};
    int n=sizeof(a)/sizeof(a[0]);
    inversionCount(a,n);
    return 0;
}
