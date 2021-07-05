//Find the first repeating element in an array of integers
#include <stdio.h>
int firstRepeat(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
                if(a[i]==a[j]){
                return a[i];
            }
        }  
    }
    return -1;
}
int main()
{
    int a[]={10, 5, 3, 4, 3, 5, 6};
    int n=sizeof(a)/sizeof(a[0]);
    int found=firstRepeat(a,n);
    if(found==-1){
        printf("No element is repeated in array");
    }else{
        printf("First repeating element of array is:%d",found);
    }
    
}
