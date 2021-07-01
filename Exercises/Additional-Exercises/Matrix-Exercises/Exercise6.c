//Largest sum of zigzag sequence in a matrix
#include <stdio.h>
#define N 3
int max(int a,int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
int findSum(int a[][N],int i,int j,int n){
    //If we reach last row, return the corresponding element
    if(i==n-1){
        return a[i][j];
    }
    int s=0;
    for(int k=0;k<n;k++){
        if(k!=j){
            s=max(s,findSum(a,i+1,k,n));
        }
    }
    return s+a[i][j];
}
int sumZigzag(int a[][N],int n){
    int sum=0;
    //As seq starts from first row
    //=>consider elements from row 0    
    for(int j=0;j<N;j++){
        sum=max(sum,findSum(a,0,j,n));
    }
    return sum;
}
int main(){
    int a[N][N]={{4,2,1},{3,9,6},{11,3,15}};
    int res=sumZigzag(a,3);
    printf("Largest sum of zigzag sequenxe in given matrix: %d",res);
    return 0;
}
