#include <stdio.h>
 
void merge(int a[], int l, int m, int r)
{
    int i, j;
    //no. of elements in left and right array
    int n1 = m-l+1;
    int n2 = r-m;
 
    //create 2 temp arrays
    int L[n1], R[n2];
 
    //Copy data to temp arrays 
    for (i = 0; i < n1; i++)
        L[i] = a[i+l];
    for (j = 0; j < n2; j++)
        R[j] = a[j+m+1];

    i = 0;
    j = 0; 
    int k=l;
    //Assign smallest value taken from temp array into actual array
    while (i<n1 && j<n2) {
        if (L[i]<=R[j]) {
            a[k] = L[i];
            i++;
        }
        else {
            a[k] = R[j];
            j++;
        }
        k++;
    }
    while (i<n1) {
        a[k] = L[i];
        i++;
        k++;
    }
    while (j<n2) {
        a[k] = R[j];
        j++;
        k++;
    }
}
 
void mergeSort(int a[], int l, int r)
{
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);
        merge(a, l, m, r);
    }
}
 
void printArray(int a[],int size){
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
    mergeSort(a,0,n-1);
    printf("\nSorted array: \n");
    printArray(a, n);
    return 0;
}
