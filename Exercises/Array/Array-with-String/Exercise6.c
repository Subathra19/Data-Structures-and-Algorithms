//Panagram string
#include<stdio.h>
int pangram(char a[]){
	int count=0;
	int exist[26]={0};//Initialize an array of size 26 to zero 
	for(int i=0;a[i]!='\0';i++){
		if(a[i]>='a'&&a[i]<='z'){
			if(exist[a[i]-'a']==0){
				count++;
				exist[a[i]-'a']=1;
			}
		}
		if(a[i]>='A'&&a[i]<='Z'){
			if(exist[a[i]-'A']==0){//a[i]=T => 'T'-'A'=19(Based on ASCII value) 
				count++;
				exist[a[i]-'A']=1;
			}
		}
		
	}
	return count;
}
int main(){
	char a[100];
	printf("Enter the string:");
	gets(a);
	int chck=pangram(a);
	if(chck==26){
		printf("The entered string is a pangram string");
	}else{
		printf("The entered string is not a pangram string");
	}
	return 0;
}
