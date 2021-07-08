//Excel
#include <stdio.h>
void excel(int n){
    char c[50];
    int i=0,num=n;
    int l=0;
    //Hint: Write code for AZ
    while(n>0){
        int rem=n%26;
        if(rem==0){
            c[i++]='Z';
            n=(n/26)-1;
        }else{
            c[i++]=(rem-1)+'A';
            n=n/26;
        }
    }
    c[i]='\0';
    printf("Column name for corresponding column number %d is:\n",num);
    for(int j=0;c[j]!='\0';j++){
        l++;
    }
    for(int j=l-1;j>=0;j--){
        printf("%c",c[j]);
    }
}
int main(){
    int n;
    printf("Enter column number:");
    scanf("%d",&n);
    excel(n);
    return 0;
}
