//Count all possible paths from top left to bottom right in a matrix
#include <stdio.h>
#include <limits.h>
#define N 3
int min(int a,int b,int c){
    if(a<b && a<c){
        return a;
    }else if(b<c){
        return b;
    }else{
        return c;
    }
}
int minCostPath(int a[][N],int m,int n){
    if(m<0 || n<0){
        return INT_MAX;
    }
    if(m==0 && n==0){
        return a[m][n];
    }
    int x=minCostPath(a,m-1,n-1);
    int y=minCostPath(a,m-1,n);
    int z=minCostPath(a,m,n-1);
    return a[m][n]+min(x,y,z);
}
int main()
{
    int m,n;
    int a[N][N]={{1,2,3},{4,8,2},{1,5,3}};
    printf("Enter row value:");
    scanf("%d",&m);
    printf("Enter column value:");
    scanf("%d",&n);
    printf("Minimum cost path from (0,0) to (%d,%d) is: %d",m,n,minCostPath(a,m,n));
    return 0;
}
