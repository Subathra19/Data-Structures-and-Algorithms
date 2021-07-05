//Minimum number of coins
#include<stdio.h>
#include<limits.h>
int minCoins(int a[], int n, int x){ 
    int res = INT_MAX;
    if (x== 0) {
       return 0; 
    }
    for (int i=0; i<n; i++){
        if (a[i] <= x){
            int s = minCoins(a, n, x-a[i]);
            if (s!= INT_MAX && s+ 1 < res){
                res = s + 1;
            } 
        }
    }
   return res; 
} 
int main(){
    int x,n;
    int a[] =  {8, 5, 2, 3}; 
    n = sizeof(a)/sizeof(a[0]); 
    printf("Enter the value:");
    scanf("%d",&x);
    printf("Minimum coins required is:%d",minCoins(a,n,x)); 
    return 0; 
} 



