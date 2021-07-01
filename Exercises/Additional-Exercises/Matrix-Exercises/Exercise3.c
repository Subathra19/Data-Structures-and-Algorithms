//Boolean matrix
#include <stdio.h>
#define M 3 
#define N 4
void booleanMatrix(int a[M][N]){
    int row=0, column=0;
    for (int i=0; i<M; i++){ 
        for(int j=0;j<N;j++){
            if(i==0 && a[i][j]==1){
                row=1;
            }
            if(j==0 && a[i][j]==1){
                column=1;
            }
            if(a[i][j]==1){
                a[0][j]=1;
                a[i][0]=1;
            }
        }
    }
    for (int i=1; i<M; i++){ 
        for(int j=1;j<N;j++){
            if(a[i][0]==1||a[0][j]==1){
                a[i][j]=1;
            }
        }
    }
    if(row==1){
        for(int j=0;j<N;j++){
            a[0][j]=1;
        }
    }
    if(column==1){
        for(int i=0;i<M;i++){
            a[i][0]=1;
        }
    }
}
void display(int a[M][N]){
    for(int i=0;i<M;i++){
        printf("\n");
        for(int j=0;j<N;j++){
            printf("%d\t",a[i][j]);
        }
    }
}
int main()
{
    int a[M][N]={{1,0,0,1},{0,0,1,0},{0,0,0,0}};
    printf("Input matrix:\n");
    display(a);
    booleanMatrix(a);
    printf("\nBoolean matrix:\n");
    display(a);
    return 0;
}
