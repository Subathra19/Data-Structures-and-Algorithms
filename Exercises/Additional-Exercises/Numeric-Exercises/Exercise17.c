//Converting Decimal Number lying between 1 to 3999 to Roman Numerals
#include <stdio.h>
#define NUMBER_OF_STRING 13
#define MAX_STRING_SIZE 3
void roman(int n){
  int num[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
  char s[NUMBER_OF_STRING][MAX_STRING_SIZE] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
  int i=12;
  while(n>0){
    int rem=n/num[i];
    n=n%num[i];
    while(rem>0){
      printf("%s",s[i]):
      rem--;
    }
    i--;
  }
}
int main(){
  int n;
  printf("Enter the number:");
  scanf("%d",&n);
  roman(n);
  return 0;
}
