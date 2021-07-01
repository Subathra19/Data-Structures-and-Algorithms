//0-1 Knapsack problem
/*
Consider two integer arrays:v[] of size n and w[] of size n  which represent values and weights associated with n items respectively.
For a given knapsack capacity (C), find out the maximum value subset of v[] such that sum of the weights of this subset is smaller than or equal to C.
*/
#include <stdio.h>
int max(int a,int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
} 
int maxVal(int wt[],int val[],int n,int w){
    if(n==0||w==0){
        return 0;
    }
    //When weight of an element exceeds w.
    //Remove that element from list
    if(wt[n-1]>w){
        return maxVal(wt,val,n-1,w);
    }
    //Including nth item
    int including=val[n-1]+maxVal(wt,val,n-1,w-wt[n-1]);
    //Excluding nth item
    int excluding=maxVal(wt,val,n-1,w);
    return max(including,excluding);
}
int main()
{
    int value[]={160,200,220};
    int weight[]={20,40,60};
    int n=sizeof(weight)/sizeof(weight[0]);
    int w=0;
    printf("Enter weight:");
    scanf("%d",&w);
    int res=maxVal(weight,value,n,w);
    printf("Maximum total value in knapsack: %d",res);
    return 0;
}
