//Maximum intervals overlap
#include <stdio.h>
void insertionSort(int a[],int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int key=a[i];
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
}
void maxGuests(int a[],int e[],int n){
    insertionSort(a,n);
    insertionSort(e,n);
    int guests=1;
	int max=0;
    int i=1,j=0;
    int time=a[0];
    while(i<n && j<n){
        if(a[i]<=e[j]){
            guests++;
            if(guests>max){
                max=guests;
                time=a[i];
            }
            i++;
        }else{
            guests--;
            j++;
        }
    }
    printf("Maximum guests in the party is: %d at time %d",max,time);
}
int main(){
    int a[]={1, 2, 9, 5, 5};//ariival time
    int e[]={4, 5, 12, 9, 12};//exit time
    int n=sizeof(a)/sizeof(a[0]);
    maxGuests(a,e,n);
    return 0;
}

