//Minimum number of platforms required for a railway station
/* 
Consider two arrays that represent the arrival and departure times of trains that stop.
*/
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
void minPlatforms(int a[],int d[],int n){
    insertionSort(a,n);
    insertionSort(d,n);
    int p=1;
    int res=0;
    int i=1,j=0;
    while(i<n&&j<n){
        if(a[i]<=d[j]){
            p++;
            i++;
            if(p>res){
                res=p;
            }
        }else{
            p--;
            j++;
        }
    }  
    printf("Minimum number of platforms required: %d",res);
}
int main() 
{ 
    int arrival[]={900, 940, 950, 1100, 1500, 1800};
    int departure[]={910, 1200, 1120, 1130, 1900, 2000};
    int n=sizeof(arrival)/sizeof(arrival[0]);
    minPlatforms(arrival,departure,n); 
    return 0; 
}
