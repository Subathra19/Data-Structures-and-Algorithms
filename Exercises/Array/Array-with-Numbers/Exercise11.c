//Find the maximum difference between two elements of an array such that larger element appears after smaller element
#include <stdio.h>
void maxDiff(int a[],int n){
    int max=0;
    int min=a[0];
    int x,y;
    int flag=0;
    for(int i=0;i<n;i++){
            if((a[i]-min)>max){
                flag=1;
                max=a[i]-min;
                x=a[i];
                y=min;
            }    
            if(a[i]<min){
                min=a[i];
            }
    }
    if(flag){
        printf("Maximum difference is:%d . And it is located between elements %d and %d",max,x,y);
    }else{
    	printf("Maximum difference doesnt exist");
	}
}
int main()
{
    int n;
    int a[]={2, 3, 10, 6, 4, 8, 1};
    n= sizeof(a)/sizeof(a[0]);
    maxDiff(a,n);
    return 0;
}

