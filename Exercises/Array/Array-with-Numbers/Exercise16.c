//GCD of an array
#include <stdio.h>
int gcd(int x, int y){
    if(y==0){
        return x;
    }
    return gcd(y,x%y);
}
int gcdArray(int a[], int n){
    int res=a[0];
    for(int i=1;i<n;i++){
        res=gcd(a[i],res);
    }
    return res;
}
int main()
{
    int a[]={3,9,6,27,15};
    int n=sizeof(a)/sizeof(a[0]);
    printf("GCD of the array is:%d",gcdArray(a,n));
    return 0;
}
