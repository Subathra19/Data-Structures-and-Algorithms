// GCD and LCM
#include <stdio.h>
int gcd(int x, int y){
    if(y==0){
        return x;
    }
    return gcd(y,x%y);
}
int lcm(int x, int y){
    return ((x*y)/gcd(x,y));
}
int main()
{
    int x,y;
    printf("Enter two numbers:");
    scanf("%d\t%d",&x,&y);
    printf("GCD of %d and %d is:%d",x,y,gcd(x,y));
    printf("\nLCM of %d and %d is:%d",x,y,lcm(x,y));
    return 0;
}
