#include <stdio.h>

void insertionSort(int a[], int n){
    int j;
    for(int i=1;i<n;i++){
        int key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
}
 
void printArray(int a[], int size){
    int i;
    for (i=0; i < size; i++){
        printf("%d ", a[i]);
    }
}

int main(){
    int a[] = {64, 25, 25, 12, 22, 90, 11};
    int n = sizeof(a)/sizeof(a[0]);
    printf("Initial array: \n");
    printArray(a, n);
    insertionSort(a, n);
    printf("\nSorted array: \n");
    printArray(a, n);
    return 0;
}
