//Find two missing numbers in an array
#include <stdio.h>
int countSetBits (int n){
    int count = 0;
    while (n > 0){
        if (n & 1){
	        count++;
	    }
        n = n >> 1;
    }
    return count;
}
void findMissingNumbers (int a[], int n){
    int res = 0, res1 = 0;
    int b = 0;
    for (int i = 0; i < n; i++){
        res = res ^ a[i];
    }
    for (int i = 1; i <= n+2; i++){
        res1 = res1 ^ i;
    }
    b = res ^ res1;
    int c = countSetBits (b);
    int x=0,y=0;
    for (int i = 0; i < n; i++){
         if (a[i] & c) 
            x = x ^ a[i];
        else
            y = y ^ a[i];
    }
    for (int i = 1; i <= n+2; i++){
        if (i & c) 
            x = x ^ i; 
        else
            y = y ^ i;
    }
    printf("Two Missing Numbers are\n %d %d", x, y);
}

int main (){
    int a[] = { 2,1,6,5};
    int n = sizeof (a) / sizeof (a[0]);
    findMissingNumbers (a, n);
    return 0;
}
