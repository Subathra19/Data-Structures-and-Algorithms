// Online C compiler to run C program online
#include <stdio.h>
int a[100];
int fib(int num){
    if(a[num]==0){
       if(a[num]<=1){
            a[num]=num;
        }
        else{
            a[num]=fib(num-1)+fib(num-2);    
        } 
    }
    
    return a[num];
}
int main() {
    //0,1,1,2,3,5,8,13,21... If n=7 => Output=13 in fib series
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Fibonacci Series:\n");
    int f=0;
    for (int i=0;i<100;i++){
        a[i]=0;
    }
    for(int i=0;i<=n;i++){
        printf("%d\t",fib(f));
        f++;
    }
    printf("\nOutput:%d",fib(n));
    return 0;
}
