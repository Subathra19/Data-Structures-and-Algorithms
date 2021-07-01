//Find prime numbers in a range
#include<stdio.h>
int prime(int n){
    
    if(n==0||n==1){
        return 0;
    }
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
           return 0; 
        }
    }
    return 1;
}
int main(){
	int l,u;
    printf("Enter the range:");
    printf("\nLower bound:");
    scanf("%d",&l);
    printf("\nUpper bound:");
    scanf("%d",&u);
    printf("The prime numbers from %d to %d are:",l,u);
    for(int i=l;i<=u;i++){
        int chck=prime(i);
        if(chck){
            printf("%d\t",i);
        }
    }
}
