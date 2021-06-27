//Check if a number is bleak
#include<stdio.h>
int countSetBits(int m){
   int count=0;
    while(m){
        if(m&1){
            count++;
        }
        m=m>>1;
    } 
    return count;
}
int bleak(int n){
    for(int i=ceilLog2(n);i<n;i++){
        if((i+countSetBits(i))==n){
            return 1;
        }
    }
    return 0;    
}
int main(){
	int n;
    printf("Enter n:");
    scanf("%d",&n);
    int b=bleak(n);
    if(b){
        printf("%d is not a bleak number",n);
    }else{
        printf("%d is a bleak number",n);
    }
}
