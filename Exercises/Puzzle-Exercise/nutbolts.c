//Nut-Bolt Problem
#include<stdio.h>
void swap(char *a, char*b){
    char temp=*a;
    *a=*b;
    *b=temp;
}
int partition(char a[],int l ,int h, char pivot){
    int i=l-1;
    for(int j=l;j<=h;j++){
        if(a[j]<pivot){
            i++;
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[h]);
    return(i+1);
    
}
void match(char nuts[],char bolts[],int l,int h){
	if(l<h){
	    //choose bolts[h] as pivot for nuts partition
	    //And nuts[partition index] as pivot for bolts partition
	    int p=partition(nuts,l,h,bolts[h]);
	    partition(bolts,l,h,nuts[p]);
	    match(nuts,bolts,l,p-1);
	    match(nuts,bolts,p+1,h);
	}
}
void display(char a[],int n){
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%c\t",a[i]);
    }
}
int main(){
	char nuts[]={'$','#','%','^','@','&'};
	char bolts[]={'@','^','$','&','#','%',};
	int n=sizeof(nuts)/sizeof(nuts[0]);
	match(nuts,bolts,0,n-1);
	printf("Matched nuts and bolts are:\n");
	display(nuts,n);
	display(bolts,n);
}

