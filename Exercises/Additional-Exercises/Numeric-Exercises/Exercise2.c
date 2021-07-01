//Is Binary Number Multiple of 3 
#include <stdio.h>
int chck(int n) 
{ 
    int odd_count = 0; 
    int even_count = 0; 
    if (n < 0){
        n = -n;
    }    
    if (n == 0){ 
        return 1;
    }    
    else if (n == 1){ 
        return 0;
    }
  
    while (n) { 
        if (n & 1){ 
            odd_count++;
        }    
        if (n & 2){ 
            even_count++;
        }    
        n = n >> 2; 
    } 
    return chck(odd_count - even_count); 
} 
int main() 
{ 
    int n = 25; 
    printf("Enter the number:");
    scanf("%d",&n);
	if (chck(n)){
        printf("%d is multiple of 3", n); 
    }else{
        printf("%d is not a multiple of 3", n); 
    }
    return 0; 
} 
