//Find the row with maximum number of 1’s in a matrix
#include <stdio.h>
#define M 4
# define N 4
void maxRow(int a[M][N]){
    int max=0,row=-1;
    for(int i=0;i<M;i++){
        int count =0;
        for(int j=0;j<N;j++){
            if(a[i][j]==1){
                count++;
            }
        }
        if(count>max){
            max=count;
            row=i;
        }
    }
    printf("\nIndex of row with maximum 1s is %d",row);
}
void display(int a[M][N]){
    for(int i=0;i<M;i++){
        printf("\n");
        for(int j=0;j<N;j++){
            printf("%d\t",a[i][j]);
        }
    }
}
int main(){
    int a[N][N]={{1,0,0,1},{0,1,1,0},{1,1,1,0},{0,0,1,0}};
    printf("Input matrix:");
    display(a);
    maxRow(a);
}
