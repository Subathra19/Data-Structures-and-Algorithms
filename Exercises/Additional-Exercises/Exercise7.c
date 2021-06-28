//Check if a number is the power of another number
#include <stdio.h>
int power(int x, int n){
    int res=1;
    while(n>0){
        res=res*x;
        n--;
    }
    return res;
}
int checkPower(int a, int b){
    for(int i=0;i<b;i++){
    if(power(a,i)==b){
        return 1;
    }
    }
    return 0;
}
int main()
{
    int a,b;
    printf("Enter the numbers:");
    scanf("%d\t%d",&a,&b);
    int chck= checkPower(a,b);
    if(chck){
        printf("%d is power of %d",b,a);
    }else{
        printf("%d is not power of %d",b,a);
    }
    return 0;
}
