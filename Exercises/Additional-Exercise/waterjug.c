//Two Water jug problem
#include <stdio.h>
int min(int a,int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}
int gcd(int x, int  y){
    if(y==0){
        return x;
    }
    return gcd(y,x%y);
}
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
int pour(int n,int m,int v){
    //Initially fill jug n 
    int n_fill=n;
    int m_fill=0;
    int count=1;
    while(n_fill!=v && m_fill!=v){
        int temp=min(n_fill,m-m_fill);//amount of water that can be poured
        n_fill=n_fill-temp;
        m_fill=m_fill+temp;
        //When jug m is full, empty it
	    if(m_fill==m){
            m_fill=0;
            count++;
        }
        //when jug n is empty, fill it
        if(n_fill==0){
            n_fill=n;
            count++;
        }
        if((n_fill==v)||(m_fill==v)){
            break;
        }
        count++;
    }
    return count;
}
int waterJug(int m,int n,int v){
    if(m>n){
        swap(&m,&n);
    }
    if(v>n){
        return -1;
    }
    if((v%gcd(m,n))!=0){
        return -1;
    }
    return min(pour(n,m,v),pour(m,n,v));
}
int main()
{
    int m=3,n=5;
    int v;
    printf("Enter the litres of water to be measured:");
    scanf("%d",&v);
    int l=waterJug(m,n,v);
    if(l==-1){
        printf("Cannot be measured");
    }else{
        printf("Minimum number of steps required to measure %d litres is: %d",v,l);
    }
    return 0;
}


