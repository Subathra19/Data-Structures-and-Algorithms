//Check  if two arrays are equal
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
int equalArray(int a1[],int a2[],int n1,int n2){
    if(n1!=n2){
        return 0;
    }
    insertionSort(a1,n1);
    insertionSort(a2,n2);
    for(int i=0;i<n1;i++){
        if(a1[i]!=a2[i]){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a1[]={3,5,2,5,2};
    int a2[]={2,3,5,5,2};
    int n1=sizeof(a1)/sizeof(a1[0]);
    int n2=sizeof(a2)/sizeof(a2[0]);
    int chck=equalArray(a1,a2,n1,n2);// as both arrays are of equal size
    if(chck){
        printf("Both arrays are equal");
    }else{
        printf("Both arrays are not equal");
    }
    return 0;
}

