#include <iostream>
#include <cstring>
using namespace std;
//Function to reverse the string
void reverseString(char a[]){
   int n=strlen(a);
   int l=0;
   int r=n-1;
   while(l<r){
       char temp=a[l];
       a[l]=a[r];
       a[r]=temp;
       l++;
       r--;
   }
}
int main() {
    char a[100];
    cout<<"Enter the input string:";
    cin.getline(a,100);
    cout<<"Input String:"<<a;

    reverseString(a);
    cout<<"\nAfter reversal:"<<a;
    return 0;
}
