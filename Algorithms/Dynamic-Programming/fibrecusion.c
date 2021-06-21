#include <stdio.h>
int fib(int num){
    if(num<=1){
        return num;
    }
    return fib(num-1)+fib(num-2);
}
int main() {
    //0,1,1,2,3,5,8,13,21... If n=7 => Output=13 in fib series
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Fibonacci Series:\n");
    int f=0;
    for(int i=0;i<=n;i++){
        printf("%d\t",fib(f));
        f++;
    }
    printf("\nOutput:%d",fib(n));
    return 0;
}
