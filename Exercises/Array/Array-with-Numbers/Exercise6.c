//Largest subset whose all elements are Fibonacci numbers
#include<stdio.h>
#include<math.h>
int isPerfectSq(int n){
    int check=sqrt(n);
    if((check*check)==n){//sqrt(5)=2
        return 1;
    }else{
        return 0;
    }
}
int checkFib(int n){
    int x=(5*n*n)+4;
    int y=(5*n*n)-4;
    if(isPerfectSq(x)||isPerfectSq(y)){
        return 1;
    }
    return 0;
}
void subsetFib(int a[],int n){
    for(int i=0;i<n;i++){
        if(checkFib(a[i])){
            printf("%d\t",a[i]);
        }
    }
}
int main(){
    int a[]={1, 4, 3, 9, 10, 13, 7 };
    int n=sizeof(a)/sizeof(a[0]);
    printf("Input array:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\nFibonacci numbers found in array:\n");
    subsetFib(a,n);
    return 0;
}

