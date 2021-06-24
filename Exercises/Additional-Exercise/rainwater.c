//Rain water trapping
#include <stdio.h>
int rainwaterTrapping(int a[],int n){
    int lmax=0,rmax=0;
    int l=0,h=n-1;
    int res=0;
    while(l<=h){
        if(a[l]<a[h]){
            if(a[l]>lmax){
                lmax=a[l];
            }else{
              res=res+lmax-a[l];  
            }
            l++;
        }else{
            if(a[h]>rmax){
                rmax=a[h];
            }else{
                res=res+rmax-a[h];
            }
            h--;
        }
    }
    return res;
}
int main()
{
    int k;
    int a[]={2,0,2,1,3};
    int n=sizeof(a)/sizeof(a[0]);
    int r=rainwaterTrapping(a,n);
    printf("Maximum water that can be accumulated is: %d",r);
}

