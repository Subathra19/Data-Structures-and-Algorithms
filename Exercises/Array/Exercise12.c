//Find triplets in an array with zero sum
#include <stdio.h>
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
void findTriplets(int a[],int n){
    int found=0;
    insertionSort(a,n);   
    for(int i=0;i<n-1;i++){
        int l=i+1;
        int r=n-1;
        while(l<r){
            int sum=a[i]+a[l]+a[r];
            if(sum==0){
                found=1;
                printf("\nThe triplets are:%d, %d, %d",a[i],a[l],a[r]);
                l++;
                r--;
            }
            if(sum<0){
                l++;
            }
            if(sum>0){
                r--;
            }
        }
    }
    if(found==0){
        printf("No triplets found")
    }
}
int main()
{
    int a[]={0, -1, 2, -3, 1};
    int n=sizeof(a)/sizeof(a[0]);
    findTriplets(a,n);
    return 0;
}
