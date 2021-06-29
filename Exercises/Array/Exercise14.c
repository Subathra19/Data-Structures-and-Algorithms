//Pythagorean triplets
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
int sqRoot(int n){
    int res=1;
    if(n==1||n==0){
        return n;
    }
    for(int i=2;i<n;i++){
    res=i*i;
    if(res==n){
        return i;
    }
    }   
}
void phythagoreanTriplets(int a[],int n){
    int found=0;
    int i;
    for(i=0;i<n;i++){
        a[i]=a[i]*a[i];
    }
    insertionSort(a,n);
    for(i=n-1;i>0;i--){
        int l=0;
        int r=i-1;
        while(l<r){
            int sum=a[l]+a[r];
            if(sum==a[i]){
                found=1;
                printf("\nThe triplets are:%d, %d, %d",sqRoot(a[i]),sqRoot(a[l]),sqRoot(a[r]));
                l++;
                r--; 
            }
            if(sum<a[i]){
                l++;
            }
            if(sum>a[i]){
                r--;
            }
        }
    }
    if(found==0){
        printf("No triplets found");
    }
}
int main()
{
    int a[]={3,1,4,6,5};
    int n=sizeof(a)/sizeof(a[0]);
    phythagoreanTriplets(a,n);
    return 0;
}
