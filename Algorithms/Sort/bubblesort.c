#include <stdio.h>
 
void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}
 
void bubbleSort(int a[], int n)
{
   int i, j;
   for (i=0;i<n-1;i++){
       for (j=0;j<n-i-1;j++){
           if(a[j]>a[j+1]){
               swap(&a[j], &a[j+1]);
           }
       }
   }    
}
 
void printArray(int a[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main()
{
    int a[100] = {};
    int n;
    printf("Enter no. of elements:");
    scanf("%d",&n);
    //int n = sizeof(a)/sizeof(a[0]);
    printf("Enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);    
    }
    printf("Initial array: \n");
    printArray(a, n);
    bubbleSort(a, n);
    printf("Sorted array: \n");
    printArray(a, n);
    return 0;
}
