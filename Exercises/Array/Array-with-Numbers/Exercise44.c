//Count the number of binary strings without consecutive 1’s
#include<stdio.h>
int countStrings(int n) 
{ 
    int a[n], b[n]; 
    a[0] = b[0] = 1; 
    for (int i = 1; i < n; i++) 
    { 
        a[i] = a[i-1] + b[i-1]; 
        b[i] = a[i-1]; 
    } 
    return a[n-1] + b[n-1]; 
} 
int main() 
{ 
    int n;
    printf("Enter N value:");
    scanf("%d",&n);
    printf("Number of binary strings for the number %d is: %d",n,countStrings(n)); 
    return 0; 
}
