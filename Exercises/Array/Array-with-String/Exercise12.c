//Run length encoding
#include <stdio.h>
int runLength(char a[],int n){
    for(int i=0;i<n;i++){
        int count=1;
        while(i<n-1 && a[i]==a[i+1]){
            count++;
            i++;
        }
        printf("%c%d",a[i],count);
    }
}
int main(){
	char a[]="aaabbcddd";
	int n=0;
	for(int i=0;a[i]!='\0';i++){
	    n++;
	}
	printf("Inpur string: ");
	for(int i=0;i<n;i++){
	    printf("%c",a[i]);
	}
	printf("\n");
	runLength(a,n);
    return 0;
}
