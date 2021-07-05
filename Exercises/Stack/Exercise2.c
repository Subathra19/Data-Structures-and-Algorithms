//Find the minimum element in a stack
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
struct node{
    int data;
    struct node* next;
};
struct node* newNode(int x){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;
    return temp;
}
void push(struct node**root,int x){
    struct node* temp=newNode(x);
    temp->next=*root;
    *root=temp;
    //printf("\n%d pushed successfully into the stack",x);
}
int pop(struct node** root){
    if(*root==NULL){
        return 0;
    }
    struct node* temp=*root;
    *root=(*root)->next;
    int x=temp->data;
    free(temp);
    return x;
}
int peek(struct node* root){
    if(root==NULL){
        return 0;
    }
    return root->data;
}
int getMin(struct node* root){
  int min=INT_MAX;
  while(root!=NULL){
    int x=peek(root);
    if(x<=min){
      min=x;
    }
    root=root->next;
  }
  return min;
}
void display(struct node* root){
    while(root!=NULL){
        printf("%d\t",root->data);
        root=root->next;
    }
}
int main(){
    struct node* root=NULL;
    push(&root,4);
    push(&root,5);
    push(&root,3);
    push(&root,6);
    push(&root,3);
    printf("\nInput stack:\n");
    display(root);
    printf("\nMinimum element of a stack: %d", getMin(root));
    display(tempStack);
    return 0;
}
