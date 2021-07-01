//Check whether a number is power of 2
#include <stdio.h>
int powOfTwo(int n){
    int flag=0;
    if(n==0){
        return 0;
    }
    while(n!=1){
        if(n%2!=0){
            return 0;
        }
        n=n/2;
        }
    return 1;
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int chck= powOfTwo(n);
    if(chck){
        printf("%d is power of 2",n);
    }else{
        printf("%d is not power of 2",n);
    }
    return 0;
}
