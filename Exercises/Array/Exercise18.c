//Find leaders in an array
#include <stdio.h>
void leaders(int a[],int n){
    int max=a[n-1];
    printf("%d\t",max);
    for(int i=n-2;i>=0;i--){
        if(a[i]>max){
            max=a[i];
            printf("%d\t",a[i]);
        }
    }
}
int main()
{
    int n;
    int a[]={18, 20, 4, 7, 5, 2};
    n= sizeof(a)/sizeof(a[0]);
    printf("Leaders are:\n");
    leaders(a,n);
    return 0;
}
