//Find the character in first string that is present at minimum index in second string
#include <stdio.h>
#include <limits.h>
int length(char s[]){
    int n=0;
    for(int i=0;s[i]!='\0';i++){
        n++;
    }
    return n;
}
void findMinIndex(char s2[],char s1[],int n2,int n1){
    int min_index=INT_MAX;
    for(int i=0;i<n2;i++){
        for(int j=0;j<n1;j++){
            if(s2[i]==s1[j]){
                if(j<min_index){
                    min_index=j;
                    break;
                }
            }
        }
    }
    if(min_index!=INT_MAX){
        printf("\nMinimum index character is: %c",s1[min_index]);
    }else{
        printf("\nThere is no minimumu index character");
    }
}
int main(){
    char a[]="owl";
    char b[]="hellow";
    int n1=length(a);
    int n2=length(b);
    printf("String 1: %s",a);
    printf("\nString 2: %s",b);
    findMinIndex(a,b,n1,n2);
}
