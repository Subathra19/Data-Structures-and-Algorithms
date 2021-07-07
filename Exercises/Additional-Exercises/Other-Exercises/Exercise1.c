//Count number of squares in a rectangle
#include <stdio.h>
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
int countSquares(int m,int n){
    //To ensure m<n
    if(n>m){
        swap(&n,&m);
    }
    int count=(m*(m+1)*(2*m+1)/6)+((n-m)*m*(m+1)/2);
    return count;
}
int main()
{
    int n1,n2;
    printf("Enter the dimensions of rectangle:\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    int res=countSquares(n1,n2);
    printf("Total number of squares in a rectangle is: %d",res);
    return 0;
}

