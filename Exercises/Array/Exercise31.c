//Find the missing and repeating number in array of integers
#include <stdio.h>
int repeating(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                return a[i];
            }
        }
    }
    
}
void missing(int a[],int n){
    int sum=n*(n+1)/2;
    int repeat=repeating(a,n);
    for(int i=0;i<n;i++){
        sum=sum-a[i];
    }
    printf("Repeating number: %d",repeat);
    printf("\nMissing number: %d",sum+repeat);
}
int main()
{
    int a[]={4, 3, 6, 2, 1, 1};
    int n=sizeof(a)/sizeof(a[0]);
    missing(a,n);
    
}
