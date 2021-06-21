#include<iostream>
using namespace std;
//Function to reverse the given array
void reverseArray(int a[],int n){ 
    int l=0;
    int r=n-1;
    while(l<r){
        int temp=a[l];
        a[l]=a[r];
        a[r]=temp;
        l++;
        r--;
    }
}

//Function to print the elements of array
void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
}

int main() {
    int a[]={10,5,36,85};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"Input Array:"<<endl;
    printArray(a,n);
    reverseArray(a,n);
    cout<<"\nAfter reversal:"<<endl;
    printArray(a,n);
    return 0;
}
