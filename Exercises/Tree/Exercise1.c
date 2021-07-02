//Find the total number of possible binary trees and binary search trees with n nodes
#include <stdio.h>
int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    return n*fact(n-1);
}
int catalan(int n){
    if(n<=1){
        return 1;
    }
    int res=0;
    for(int i=0;i<n;i++){
        res=res+catalan(i)*catalan(n-1-i);
    }
    return res;
}
int bst(int n){
    return catalan(n);
}
int bt(int n){
    int res=catalan(n)*fact(n);
    return res;
}
int main(){
    int n;
    printf("Enter number of nodes:");
    scanf("%d",&n);
    int bst_count=bst(n);
    int bt_count=bt(n);
    printf("Total number of possible Binary Search trees with %d nodes: %d",n,bst_count);
    printf("\nTotal number of possible Binary trees with %d nodes: %d",n,bt_count);
    return 0;
}
