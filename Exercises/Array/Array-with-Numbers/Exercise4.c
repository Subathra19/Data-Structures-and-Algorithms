//Find whether an array is subset of another array 
#include <stdio.h>
int subsetArray(int a1[],int a2[],int n1,int n2){
    int i=0,j=0;
    for(i=0;i<n2;i++){
        for(j=0;j<n1;j++){
            if(a2[i]==a1[j]){
                break;
            }
        }
        if(j==n1){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n1,n2;
    int a1[]={11, 1, 13, 21, 3, 7};
    n1=sizeof(a1)/sizeof(a1[0]);
    int a2[]={11,3,7,1};
    n2=sizeof(a2)/sizeof(a2[0]);
    int chck=subsetArray(a1,a2,n1,n2);
    if(chck){
        printf("a2[] is subset of a1[]");
    }else{
        printf("a2[] is not subset of a1[]");
    }
}

