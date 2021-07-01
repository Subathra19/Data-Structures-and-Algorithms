//Transpose of matrix
#include <stdio.h>
#define n1 3
#define n2 4
void transpose(int a[][n2],int b[][n1]){
    for(int i=0;i<n2;i++){
        for(int j=0;j<n1;j++){
            b[i][j]=a[j][i];
    	}
    }
    for(int i=0;i<n2;i++){
        printf("\n");
        for(int j=0;j<n1;j++){
            printf("%d\t",b[i][j]);
    	}
    }
}
int main()
{
    int a[n1][n2]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int b[n2][n1];
    printf("\nInput matrix:");
    for(int i=0;i<n1;i++){
        printf("\n");
        for(int j=0;j<n2;j++){
            printf("%d\t",a[i][j]);
    	}
    }
    printf("\nTranspose of matrix:");
    transpose(a,b);
}
