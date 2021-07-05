//Transform string
#include <stdio.h>
void convertCase(char a[]){
    for(int i=0;a[i]!='\0';i++){
        if(a[i]>='a' && a[i]<='z'){
            a[i]=a[i]-32;
        }
        else if(a[i]>='A' && a[i]<='Z'){
            a[i]=a[i]+32;
        }
    }
}
int main()
{
    char a[]="ABCdef";
    printf("Input string: %s",a);
    convertCase(a);
    printf("\nOutput string:%s",a);
    return 0;
}
