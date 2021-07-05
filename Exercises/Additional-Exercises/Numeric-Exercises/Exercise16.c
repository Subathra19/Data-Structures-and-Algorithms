//Modular Exponentiation
#include <stdio.h>
int power(int a,int b){
    int res=1;
    while(b>0){
        res=res*a;
        b--;
    }
    return res;
}
void modularExpo(int x,int y,int m){
    int p=power(x,y);
    printf("Output: %d",p%m);
}
int main (){
    int x,y,m;
    printf("Enter the values:");
    printf("\nx: ");
    scanf("%d",&x);
    printf("\ny: ");
    scanf("%d",&y);
    printf("\nm: ");
    scanf("%d",&m);
    modularExpo(x,y,m);
}
