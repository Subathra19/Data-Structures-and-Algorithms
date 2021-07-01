//Maximum sum such that no two elements are adjacent in an array
//#include <stdio.h>
//int adjacentSum(int a[],int n){
//    int sum1=0,sum2=0;
//    for(int i=0;i<n;i=i+2){
//        sum1=sum1+a[i];
//    }
//    for(int i=1;i<n;i=i+2){
//        sum2=sum2+a[i];
//    }
//    if(sum1>sum2){
//        return sum1;
//    }else{
//        return sum2;
//    }
//    
//}
//int main(){
//    int a[]={5,5,10,100,10,5};
//    int n=sizeof(a)/sizeof(a[0]);
//    int res=adjacentSum(a,n);
//    printf("Maximum sum such that two elements are not adjacent is: %d",res);
//    return 0;
//}
#include <stdio.h>
int max(int a,int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
int adjacentSum(int a[],int n){
    //Includes previous element
    int include=a[0];
    //Excludes previous element
    int exclude=0;
    for(int i=1;i<n;i++){
        int temp=max(include,exclude);
        include=exclude+a[i];
        exclude=temp;
    }
    return max(include,exclude);
}
int main(){
	int a[]={5,5,10,100,10,5};
    int n=sizeof(a)/sizeof(a[0]);
    int res=adjacentSum(a,n);
    printf("Maximum sum such that two elements are not adjacent is: %d",res);
    return 0;
}
