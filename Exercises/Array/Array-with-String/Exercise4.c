//K-Palindrome
#include<stdio.h>
int checkPalindrome(char a[],char b[],int l1,int l2){
    //If string is empty then we have to remove all 
    //characters to make it as palindrome
    if(l1==0){
        return l2;
    }
    if(l2==0){
        return l1;
    }
    if(a[l1-1]==b[l2-1]){
        return checkPalindrome(a,b,l1-1,l2-1);
    }else{
        int x=checkPalindrome(a,b,l1-1,l2);
        int y=checkPalindrome(a,b,l1,l2-1);
        if(x<y){
            return x+1;
        }else{
            return y+1;
        }
    }
}
int kPalindrome(char a[],int n,int k){
     char rev[n];
     for(int i=0;i<n;i++){
         rev[i]=a[n-1-i];
     }
     rev[n]='\0';
     int res=checkPalindrome(a,rev,n,n);
     //Since given string is compared with its reverse, 
     //we will do at most N deletions from first string and 
     //N deletions from second string to make them equal.
     //Therefore, for a string to be k-palindrome, 2*N <= 2*K should hold true.
     if(res<=k*2){
         return 1;
     }
     return 0;
 }
int main(){
	char a[]="abcdeca";
	int k=2;
	int n=0;
	for(int i=0;a[i]!=0;i++){
	    n++;
	}
	int chck=kPalindrome(a,n,k);
	if(chck){
	    printf("Given string becomes a palindrome after removing %d characters",k);
	}else{
	    printf("Given string cannot become palindrome");
	}
	return 0;
}
