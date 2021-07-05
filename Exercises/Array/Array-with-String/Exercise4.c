//Palindrome string
#include<stdio.h>
int palindrome(char str1[],int n){
	int l=0;
	int h=n-1;
	while(l<h){
		if(str1[l]!=str1[h]){
			return 0;
		}
		h--;
		l++;
	}
	return 1;
}
int main(){
	char a[100];
	int n=0;
	printf("Enter the string:");
	gets(a);
	for(int i=0;a[i]!='\0';i++){
		n++;
	}
	reverse(a,n);
	int chck=palindrome(a,n);
	if(chck){
		printf("The entered string is a palindrome");
	}else{
		printf("The entered string is not a palindrome");
	}
	return 0;
}
