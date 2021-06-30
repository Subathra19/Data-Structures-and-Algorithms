//Find Nth root of a number
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
double root(int m,int n){
  // Assume a random number between 0 and 9
  double prev=rand()%10;
  //current value
  double curr;
  //Intialize the difference as INT_MAX
  double d=INT_MAX;
  //Initialize a smaller eps for more accuracy
  double e= 1e-3;
  
  //loop till the desired accuracy is reached
  while(d>e){
    //Newton's method
    curr= ((n-1.0)*prev+(double)m/pow(prev,n-1))/(double)n;
    d=abs(curr-prev);
    prev=curr;
  }
  return curr;
} 
int main(){
  int m,n;
  printf("Enter the number:");
  scanf("%d",&m);
  printf("\n Enter N value:");
  scanf("%d",&n);
  printf("\n Nth root of %d is: %lf",m,root(m,n));
  return 0;
}
