//Longest common subsequence in an array
#include <stdio.h>
int max(int a,int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
int longestCommSeq(char a[],char b[],int n1,int n2){
    if(n1==0 || n2==0){
        return 0;
    }
    if(a[n1-1]==b[n2-1]){
        return 1+longestCommSeq(a,b,n1-1,n2-1);
    }else{
        int x=longestCommSeq(a,b,n1-1,n2);
        int y=longestCommSeq(a,b,n1,n2-1);
        return max(x,y);
    }
}
int main(){ 
    char a[]="ABCDGH";
    char b[]="AEDFHR";//common=ADH
    int n1=0,n2=0;
    for(int i=0;a[i]!='\0';i++){
        n1++;
    }
    for(int i=0;b[i]!='\0';i++){
        n2++;
    }
    printf("String 1: ");
    printf("%s",a);
    printf("\nString 2: ");
    printf("%s",b);
    int l=longestCommSeq(a,b,n1,n2);
    printf("\nLength of longest common subsequence is: %d",l);
    return 0; 
}
