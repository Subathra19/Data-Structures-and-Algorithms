//Largest prime factor of a number
#include <stdio.h>
#include <math.h>
int largestFactors(int n){
    int max=0;
    if(n%2==0){
        max=2;
        n=n/2;
    }
    for(int i=3;i<=sqrt(n);i++){
        while(n%i==0){
            max=i;
            n=n/i;
        }
    }
    // when n is a prime number (Ex:11)
    if (n > 2){ 
        max=n;
    }
    return max;
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Largst prime factor of %d is: %d",n,largestFactors(n));
    return 0;
}

