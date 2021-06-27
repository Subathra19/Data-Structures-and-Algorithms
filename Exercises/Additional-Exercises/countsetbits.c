//Count set bits in an integer
#include<stdio.h>
int main(){
	int n,num;
    printf("Enter n:");
    scanf("%d",&num);
    n=num;
    int count=0;
    while(n){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    printf("Number of bits set in %d are:%d",num,count);
}
