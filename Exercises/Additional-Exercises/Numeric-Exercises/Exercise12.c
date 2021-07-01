//Trailing zeros in factorial of a number
#include <stdio.h>
int trailingZeros(int n){
	int count=0;
	for(int i=5;i<=n;i=i*5){
		count=count+(n/i);
	}
	return count;
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int res=trailingZeros(n);
    printf("Number of trailing zeros in the factorial of number %d is: %d",n,res);
	return 0;
}
