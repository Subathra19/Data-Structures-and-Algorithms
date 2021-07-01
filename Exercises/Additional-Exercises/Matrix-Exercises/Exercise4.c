//Count all possible paths from top left to right bottom for a (m,n) matrix
#include <stdio.h>
int numberOfPath(int n1,int n2){
    int i,j;
    int path[n1][n2];
    for(i=0;i<n1;i++){
        path[i][0]=1;
    }
    for(j=0;j<n2;j++){
        path[0][j]=1;
    }
    for(i=1;i<n1;i++){
        for(j=1;j<n2;j++){
            path[i][j]=path[i][j-1]+path[i-1][j];
        }
    }
    return path[n1-1][n2-1];
}
int main(){
    int n1,n2;
    printf("Enter row value:");
    scanf("%d",&n1);
    printf("Enter colum value:");
    scanf("%d",&n2);
    int p=numberOfPath(n1,n2);
    printf("Number of possible paths for (%d,%d) matrix is: %d",n1,n2,p);
    return 0;
}
