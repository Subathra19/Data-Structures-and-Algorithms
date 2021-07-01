//Search an element in matrix
#include <stdio.h>
#define n1 3
#define n2 4
void search(int a[][n2],int x){
    int flag=0;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(a[i][j]==x){
                flag=1;
                printf("Element %d is found at position (%d,%d)",x,i,j);    
            }
    	}
    }
    if(flag==0){
        printf("Element %d not found",x);
    }
}
int main()
{
    int a[n1][n2]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int x;
    printf("Enter the element to be searched:");
    scanf("%d",&x);
    search(a,x);
    
}
