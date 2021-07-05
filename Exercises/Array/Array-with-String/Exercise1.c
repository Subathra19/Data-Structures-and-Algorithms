//Remove spaces from a given string
#include<stdio.h>
void removeSpace(char a[],int n){
	int count=0;
	for(int i=0;i<n;i++){
		if(a[i]!=' '){
			a[count++]=a[i];
		}
	}
	a[count]='\0';
}
int main(){
	char a[]="pr ogra m to rem ove s pace ";
	printf("Input string: %s",a);
	int n=sizeof(a)/sizeof(a[0]);
	removeSpace(a,n);
	printf("\nOutput string after removing spaces: %s",a);
	return 0;
}
