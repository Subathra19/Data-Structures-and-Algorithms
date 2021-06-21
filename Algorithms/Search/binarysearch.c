#include<stdio.h>
int find(int a[],int l,int r,int x){
    if(l<=r){
        int m=l+(r-1)/2;
        if(x==a[m]){
            return m;
        }else if(x>a[m]){
            return find(a,m+1,r,x);
        }else{
            return find(a,l,m-1,x);
        }
    }
    return -1;
}
int main(){
    //For sorted array
    int a[] = {11,12,15,22,25,64,90};
    int n=sizeof(a)/sizeof(a[0]);
    int x;
    printf("Enter the element to be searched:");
    scanf("%d",&x);
    int index=find(a,0,n-1,x);
    if(index<0){
        printf("Element not found");
    }
    else{
        printf("Element %d found at position %d",x,index);
    }    
    return 0;
}
