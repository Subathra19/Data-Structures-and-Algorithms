//Find the element that appears once in a sorted array
#include <stdio.h>
int find(int a[],int l,int h){
    int mid=l+(h-l)/2;
    if(l==h){
        return a[l];
    }
    if(l>h){
        return 0;
    }
   // printf("\nmid=%d",mid);
    if(mid%2==0){
        if(a[mid]==a[mid+1]){
            find(a,mid+2,h);
        }else{
            find(a,l,mid);
        }
    }else{
        if(a[mid]==a[mid-1]){
            find(a,mid+1,h);
        }else{
            find(a,l,mid-1);
        }
    }
}
int main()
{
    int a[]={1, 1, 3, 3, 4, 5, 5, 7, 7, 8, 8};
    int n=sizeof(a)/sizeof(a[0]);
    int f=find(a,0,n-1);
    printf("Required element:%d",f);
    return 0;
}
