//Longest even length substring such that sum of first and second half is same
#include <stdio.h>
int max(int a,int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
int findLength(char *a){
    int n=0;
    for(int i=0;a[i]!='\0';i++){
        n++;
    }
    int len=0;
    //i-> All possible mid-points
    for(int i=0;i<=n-2;i++){
        //Consider i asmidpoint
        //And expand o both sides
        int l=i;
        int r=i+1;
        int left_sum=0;
        int right_sum=0;
        while(l>=0 &&r<=n-1){
            left_sum=left_sum+a[l];
            right_sum=right_sum+a[r];
            if(left_sum==right_sum){
                len=max(len,r-l+1);
            }
            l--;
            r++;
        }
    }
    return len;
 }
int main(){ 
    char a[]= "1538023"; 
    printf("Inputstring: %s",a);
    printf("\nLength of the substring is: %d",findLength(a)); 
    return 0; 
} 
