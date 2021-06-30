//Largest palindrome number which is the product of two n-digit numbers
#include<stdio.h>
int isPalindrome(int n){
	int res=0,rem=0;
	int num=n;
	while(n>0){
		rem=n%10;
		res=(res*10)+rem;
		n=n/10;
	}
	if(res==num){
		return 1;
	}else{
		return 0;
	}
}
void largestPalindrome(int n){
	int l=0,h=0;
	int p=0,max=0;
	//Find largest n digit value (i.e) upper limit 
	for(int i=0;i<n;i++){
		h=h*10;
		h=h+9;
	}
	//Find smallest n digit value (i.e) lower limit 
	l=(h+1)/10;
	for(int i=h;i>=l;i--){
		for(int j=i;j>=l;j--){
			p=i*j;
			if(p>max){
				if(isPalindrome(p)){
					max=p;
				}
			}else{
				break;
			}
		}
	}
	printf("The largest palinddrome number which is the product of two %d numbers is: %d",n,max);
}
int main(){
	int n;
	printf("Enter number of digits:");
	scanf("%d",&n);
	largestPalindrome(n);
	return 0;
}
