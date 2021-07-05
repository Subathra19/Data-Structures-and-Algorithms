//Sum of two numbers represented by two arrays
#include <stdio.h>
void arraySum(int a[],int b[], int n1,int n2){
    // no. of elements in a[]>no. of elements in b[]
    int i=n1-1;
    int j=n2-1;
    int k=n1-1;
    int sum[k];
    int carry=0;
    int add=0;
    while(j>=0){
        add=carry+a[i]+b[j];
        sum[k]=add%10;
        carry=add/10;
        j--;
        i--;
        k--;
    }
    while(i>=0){
        add=a[i]+carry;
        sum[k]=add%10;
        carry=add/10;
        k--;
        i--;
    }
    int res=0;
    if(carry==1){
        int res=10;
    }
    for(k=0;k<n1;k++){
           res=res*10+sum[k];
    }
    printf("\nSum of twon numbers represented by arrays: %d",res);
}
void sum(int a1[],int a2[],int n1,int n2){
    if(n1>n2){
        arraySum(a1,a2,n1,n2);
    }else{
        arraySum(a2,a1,n2,n1);
    }
}
void display(int a[],int n){
	printf("\n");
	for(int i=0;i<n;i++){
		printf("%d",a[i]);
	}
}
int main(){
    int a1[]={9,4,5,6};
    int a2[]={3,2,9};
    int n1=sizeof(a1)/sizeof(a1[0]);
    int n2=sizeof(a2)/sizeof(a2[0]);
    printf("Input array:");
    display(a1,n1);
    display(a2,n2);
    sum(a1,a2,n1,n2);
    return 0;
}

