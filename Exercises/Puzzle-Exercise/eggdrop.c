//Egg Drop Puzzle
#include<stdio.h>
#include<limits.h>
int max(int a,int b){
	if(a>b){
		return a;
	}else{
		return b;
	}
}
int eggDrop(int k,int n){
	int min=INT_MAX;
	int res=0;
	if(k==0||k==1){
		return k;
	}
	if(n==1){
		return k;
	}
	for(int i=1;i<=k;i++){
		int res=max(eggDrop(k-i,n),eggDrop(i-1,n-1));
		if(res<min){
			min=res;
		}
	}
	return min+1;
}
int main(){
	int k,n;
	printf("Enter number of floors:");
	scanf("%d",&k);
	printf("Enter number of eggs:");
	scanf("%d",&n);
	int t=eggDrop(k,n);
	printf("Minimum number of trials in the worst case with %d eggs and %d floors is: %d",n,k,t);
	return 0;
}
