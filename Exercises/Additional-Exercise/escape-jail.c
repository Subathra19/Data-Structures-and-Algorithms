// Escape jail
#include <stdio.h>
void noOfJumps(int a[],int n,int x,int y){
    int count=0;
    int climb=x-y;
    for(int i=0;i<n;i++){
        if(x>=a[i]){
            count++;
            continue;
        }else{
            int h=a[i];
            while(x<h){
                count++;
                h=h-climb;    
            }
        count++;    
        }
    }
    printf("Total number of jumps required to cross all walls: %d",count);
}
int main()
{
    int a[]={11, 10, 10, 9 };
    int x=10;
    int y=1;
    int n=sizeof(a)/sizeof(a[0]);
    noOfJumps(a,n,x,y);
    return 0;
}


