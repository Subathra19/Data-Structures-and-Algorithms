//Find the product array for an given array, a[].
#include <stdio.h>
void display(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}
void productArray(int a[],int n){
    int product[n];
    
    for(int i=0;i<n;i++){
        int p=1;
        for(int j=0;j<n;j++){
            if(a[j]==a[i]){
                continue;
            }
            p=a[j]*p;
        }
        product[i]=p;
    }
    printf("\nProduct array:");
    display(product,n);
}
int main()
{
    int n;
    int a[]={10, 5, 8, 4, 9};
    n= sizeof(a)/sizeof(a[0]);
    printf("Given array:");
    display(a,n);
    productArray(a,n);
    return 0;
}

