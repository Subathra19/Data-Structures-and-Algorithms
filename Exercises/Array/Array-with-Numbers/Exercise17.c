//Find majority element in an array a[] of size n
#include <stdio.h>
void findMajority(int a[],int n){
    int max=0;
    int element=0;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                count++;
            }
            }
        if(count>max){
            max=count;
            element=a[i];
        }
    }
    if(max>2){
    	printf("Majority element of array is %d with count %d",element,max);
	}else{
		printf("No majority element exist");
	}
}
int main()
{
    int n;
    int a[]={1, 1, 2, 1, 3, 5, 1};
    n= sizeof(a)/sizeof(a[0]);
    findMajority(a,n);
    return 0;
}
