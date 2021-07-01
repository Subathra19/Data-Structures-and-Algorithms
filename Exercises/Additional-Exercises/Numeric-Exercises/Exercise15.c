//Count number of bits to be flipped to convert A to B
#include<stdio.h>
void flippedCount(int a,int b){
    int c=a^b;//Gives the bits which are different in and b
    int count=0;
    while(c){
        if(c&1==1){
            count++;
        }
        c=c>>1;
    }
    printf("Number of bits to be flipped to convert %d to %d is: %d",a,b,count);
}
int main(){
	int a,b;
	printf("Enter two numbers:");
	scanf("%d\t%d",&a,&b);
	flippedCount(a,b);
	return 0;
}
