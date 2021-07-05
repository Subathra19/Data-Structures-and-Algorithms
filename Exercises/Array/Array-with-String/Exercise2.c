//Reverse the string
#include<stdio.h>
void reverse(char a[],int n){
	int l=0;
	int h=n-1;
	char b[n+1];
	while(l<n&&h>=0){
		b[l]=a[h];
		l++;
		h--;
	}
	b[n]='\0';
	printf("Reversed string: %s",b);
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
  return 0;	
}
