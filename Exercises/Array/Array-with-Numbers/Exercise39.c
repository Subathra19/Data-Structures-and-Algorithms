//Count frequencies of all elements in the array in O(1) extra space and O(n) time
#include <stdio.h>
void freqCount(int a[],int n){
    //Subtract 1 from each element to make it in range of 0 to n-1
    for(int i=0;i<n;i++){
        a[i]=a[i]-1;
    }
    for(int i=0;i<n;i++){
        int index=a[i]%n;
        a[index]=a[index]+n;
    }
    for(int i=0;i<n;i++){
        printf("\n%d->%d",i+1,a[i]/n);
    }
}
int main(){
	int a[]={2, 3, 3, 2, 5};
	int n=sizeof(a)/sizeof(a[0]);
    printf("Frequency count of each element in array:\n");
	freqCount(a,n);
    return 0;
}
