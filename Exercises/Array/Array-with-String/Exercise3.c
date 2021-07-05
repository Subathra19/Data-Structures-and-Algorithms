// Reverse the characters of each word
// Reverse the words in a given string
#include <stdio.h> 
void reverse(char* start, char* end){ 
    char t; 
    while (start < end) { 
        t=*start; 
        *start=*end; 
        *end=t;
        *start++;
        *end--;
    } 
} 
void revEachWord(char a[]){
    char *temp=a;
    char *b=a;
    while(*temp){
        temp++;
        if(*temp=='\0'){
            reverse(b,temp-1);
        }else if(*temp==' '){
            reverse(b,temp-1);
            b=temp+1;//To skip ' '
        }
    }
    printf("\nAfter reversing each word: %s", a); 
    //Reverse entire string after reversing each each word
    reverse(a,temp-1);  
}
int main(){ 
    char a[]="Reverse the word";
    printf("\nInput string: %s",a);
    revEachWord(a);
    printf("\nAfter reversing the whole string: %s", a); 
    return 0; 
} 
