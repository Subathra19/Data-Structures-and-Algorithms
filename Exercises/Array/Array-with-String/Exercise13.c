// Edit distance
#include<stdio.h>
int min(int a,int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}
int editDistance(char a[],char b[],int n1,int n2){
    if(n1==0){
        return n2;
    }   
    if(n2==0){
        return n1;
    }
    int res=0;
    if(a[n1-1]==b[n2-1]){
        return editDistance(a,b,n1-1,n2-1);
    }else{
        int x=editDistance(a,b,n1-1,n2);//Remove
        int y=editDistance(a,b,n1,n2-1);//Insert
        int z=editDistance(a,b,n1-1,n2-1);//Replace
        res=min(min(x,y),z);
    }
    return res+1;
}
int main(){
	char a[]="Tuesday";
	char b[]="Thursday";
	int n1=0,n2=0;
	for(int i=0;a[i]!=0;i++){
	    n1++;
	}
	for(int i=0;b[i]!=0;i++){
	    n2++;
	}
	int res=editDistance(a,b,n1,n2);
    printf("Minimum number of edits required to convert %s to %s is: %d",a,b,res);
    return 0;
}
