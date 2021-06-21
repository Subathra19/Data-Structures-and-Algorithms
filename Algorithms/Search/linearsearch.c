#include<stdio.h>
int find(int a[],int n,int x){
    for(int i=0;i<n;i++){
        if(a[i]==x){
            return i;
        }
    }
    return -1;
}
int main(){
    int a[] = {64, 15, 25, 12, 22, 90, 11};
    int n=sizeof(a)/sizeof(a[0]);
    int x;
    printf("Enter the element to be searched:");
    scanf("%d",&x);
    int index=find(a,n,x);
    if(index<0){
        printf("Element not found");
    }
    else{
        printf("Element %d found at position %d",x,index);
    }    
    return 0;
}
