//Reverse bits of a given number
#include <stdio.h>
void reverseBits(int n){
    unsigned int res=0;
    int b=sizeof(n)*8;//total number of reverseBits
    for(int i=0;i<b;i++){
        if(n&(1<<i)==1){// check wether bit isset or not from last
            res=1<<(b-1-i);
        }
    }
    printf("Number after reversing bits:%u",res);
}
int main()
{
    unsigned int n;
    printf("Enter the number:");
    scanf("%u",&n);
    reverseBits(n);
    return 0;
}
