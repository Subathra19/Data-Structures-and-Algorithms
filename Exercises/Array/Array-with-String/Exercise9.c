//Length of longest prefix in a string which is also a suffix
#include <stdio.h>
int prefixSuffix(char a[],int n){
    if(n<2){
        return 0;
    }
    int i=0;
    int j=n/2;
    while(i<n/2){
        if(a[i]==a[j]){
            i++;
            j++;
        }else{
            //No prefix
            if(i==0){
                i++;
            }else{
                j--;
            }
        }
    }
    return i;
}
int main(){
    char a[]="aabcdaabc";
    int n=0;
    for(int i=0;a[i]!='\0';i++){
        n++;
    }
    int res=prefixSuffix(a,n);
    printf("Length of longest prefix which is also suffix is: %d",res);
    return 0;
}
