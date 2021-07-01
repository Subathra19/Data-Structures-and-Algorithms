//Copy set bits in a range
#include <stdio.h>
void copySetBit(int x,int y,int l,int r){
    if(l<1 ||r>32){
        return;
    }
    for(int i=l;i<=r;i++){
        int set=1<<(i-1);
        //check whether that bit is set in y
        if(y&set){
            //if it it set, then set that bit in x
            x=x|set;
        }
    }
    printf("\nModified x: %d",x);
}
int main(){
    int x=8,y=7,l=1,r=2;
    printf("x: %d",x);
    copySetBit(x,y,l,r);
    return 0;
}
