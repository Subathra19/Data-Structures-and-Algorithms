//First non-repeating character of string
#include <stdio.h>
#include <stdlib.h>
int firstNonRepeat(char a[]){
    int index=-1;
    //TOTAL 256 ASCII character
    int* count=(int *)calloc(256,sizeof(int));//initialize an array with 0
    for(int i=0;a[i]!='\0';i++){
        count[a[i]]=count[a[i]]+1;
    }
    for(int i=0;a[i]!='\0';i++){
        if(count[a[i]]==1){
            index=i;
            break;
        }
    }
    free(count);
    return index;
}
int main()
{
    char a[]="aabcadbcef";
    int i=firstNonRepeat(a);
    if(i==-1){
        printf("There is no non-repeating character");
    }else{
        printf("The first non repeating character in the given string is: %c",a[i]);    
    }
    return 0;
}
