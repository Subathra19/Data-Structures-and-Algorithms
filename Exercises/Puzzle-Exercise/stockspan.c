//Stock-span problem
#include <stdio.h>
void findSpan(int a[],int n,int s[]){
    //Span value of firstday is always 1
    s[0]=1;
    for(int i=1;i<n;i++){
        s[i]=1;
        for(int j=i-1;(j>=0)&&(a[i]>=a[j]);j--){
            s[i]++;
        }
    }
}
void display(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}
int main(){
    int a[]={10,4,5,90,120,80};
    int n=sizeof(a)/sizeof(a[0]);
    printf("Daily price quotes for a stock:\n");
    display(a,n);
    int s[n];
    findSpan(a,n,s);
    printf("\nSpan value for corresponding days:\n");
    display(s,n);
    return 0;
}

