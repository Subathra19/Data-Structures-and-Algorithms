//Coin Change
#include <stdio.h>
int coinChange(int a[],int n,int x){
    if(x==0){
        return 1;
    }
    //value less than zer0=>no coins needed
    if(x<=0){
        return 0;
    }
    //No coins
    if(n<=0 && x>0){
        return 0;
    }
    return coinChange(a,n-1,x)+coinChange(a,n,x-a[n-1]);
}
int main()
{
    int a[]={3, 4, 1, 7};
    int n=sizeof(a)/sizeof(a[0]);
    int v;
    printf("Enter the value:");
    scanf("%d",&v);
    int c=coinChange(a,n,v);
    if(c==0){
        printf("No coins are required");
    }else{
        printf("Total number of possible solutions: %d",c);
    }
    return 0;
}


