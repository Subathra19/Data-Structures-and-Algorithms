//For an array, find the elements before which all are smaller than it and above which all are greater
#include <stdio.h>
#include <limits.h>
int max(int x,int y){
    if(x>y){
        return x;
    }else{
        return y;
    }
}
int min(int x,int y){
    if(x<y){
        return x;
    }else{
        return y;
    }
}
void find(int a[],int n){
    int flag=0;
    int lft_max[n];
    lft_max[0]=0;
    int i=-1;
    for(int i=1;i<n;i++){
        lft_max[i]=max(lft_max[i-1],a[i-1]);
    }

    int right_min[n];
    right_min[n-1]=INT_MAX;
    for(int i=n-1;i>=0;i--){
        right_min[i]=min(right_min[i+1],a[i+1]);
    }

    for(int i=0;i<n;i++){
        if(a[i]>lft_max[i]&&a[i]<right_min[i]){
            printf("Element found at index %d and the element is: %d",i,a[i]);
            flag=1;
        }
    }
    if(flag==0){
        printf("There is no such element");
    }
}
int main(){
    int a[]={15, 11, 14, 13, 16, 18, 20, 17, 19};
    int n=sizeof(a)/sizeof(a[0]);
    find(a,n);
}

