//Find median of two sorted arrays
#include <stdio.h>
int max(int x,int y){
    if(x>y){
        return x;
    }else{
        return y;
    }
}
int median(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    int median=0;
    int h=n-1;
    if(h%2==0){
        median=a[h/2];
    }else{
        int mid=(h-1)/2;
        median=(a[mid]+a[mid+1])/2;
    }
    return meidan;
}
int medianArray(int a1[],int a2[],int n){
    int m1=median(a1,n);
    int m2=median(a2,n);
    if(n==0){
        return-1;
    }
    if(n==1){
        return ((a1[0]+a2[0])/2);
    }
    if(n==2){
        int x=max(a1[0],a1[1]);
        int y=max(a2[0],a2[1]);
        return ((x+y)/2);
    }
    if(m1==m2){
        return m1;    
    }
    if(m1<m2){
    	if(n%2==0){
    		return medianArray(a1+n/2-1,a2,n/2);
		}else{
			return medianArray(a1+n/2,a2,n-n/2);
		}
    }
    if(m1>m2){
        if(n%2==0){
        	return medianArray(a2+n/2-1,a1,n-n/2);
		}else{
			return medianArray(a2+n/2,a1,n-n/2);
		}
    }  
}
int main(){ 
    int a1[]={1, 12, 15, 26, 38};
    int a2[]={2, 13, 17, 30, 45};
    int n=sizeof(a)/sizeof(a[0]);
    int m=medianArray(a1,a2,n); 
    printf("Median of two arrays: %d",m);
    return 0; 
}
