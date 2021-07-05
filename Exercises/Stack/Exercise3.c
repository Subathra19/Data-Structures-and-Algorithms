//Paranthesis checker
#include<stdio.h>
#include<stdlib.h>
struct stack{
  char data;
  struct stack *next;
};
void push(struct stack **top,char d){
  struct stack *newNode=(struct node* )malloc(sizeof(struct stack));
  newNode->data=d;
  newNode->next=*top;
  *top=newNode;
}
char pop(struct stack **top){
  struct stack *temp;
  char s;
  if(*top==NULL){
    getchar();
    exit(0);
  }else{
    temp=*top;
    s=temp->data;
    *top=temp->next;
    free(temp);
    return s;
   }
}
int isMatching(char x, char y){
  if(x=='(' && y==')'){
    return 1;
  }else if(x=='{' && y=='}'){
    return 1;
  }else if(x=='[' && y==']'){
    return 1;
  }
  return 0;
}
int checkBalance(char *b){
  int i=0;
  int flag=0;
  struct stack *node=NULL;
  for(int i=0; b[i]!='\0'; i++){
    if(b[i]=='(' || b[i]=='{' || b[i]=='['){
      push(&node==NULL);
    }else if(b[i]==')' || b[i]=='}' || b[i]==']'){
      if(node==NULL){
        return 0;
      }
      if(isMatching(pop(&node),b[i])){
        flag=1;
      }else{
        flag=0;
      }
    }
  }
  if(node==NULL){
    flag=1;
  }else{
    flag=0;
  }
  return flag;
}
int main(){
  char a[10];
  printf("Enter the expression:\n");
  scanf("%s",&a);
  int chck=checkBalance(a);
  if(chck){
    printf("Balanced");
  }else{
    printf("Not Balanced");
  }
  return 0;
}
