//Find second largest number in array
#include <stdio.h>
void secondLargest(int a[],int n){
    int max=0,max_2=0;
    if(n<2){
    	printf("Invalid input");
    	return;
	}
    for(int i=0;i<=n-1;i++){
        if(a[i]>max){
            max_2=max;
            max=a[i];
        }
        if(a[i]<max && a[i]>max_2){
            max_2=a[i];
        }
    }
    printf("The largest number is %d",max);
    printf("\nThe second largest number is %d",max_2);
}
int main()
{
    int a[]={3};
    int n=sizeof(a)/sizeof(a[0]);
    secondLargest(a,n);
    return 0;
}
