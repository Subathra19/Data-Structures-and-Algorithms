//Detect and remove loop in linked list
#include <stdio.h>
#include<stdlib.h>
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
void insert(struct node**head,int x){
  struct  node*last=*head;
  if(last==NULL){
    last->data=x;
    last->next=NULL;
  }
  while(last->next!=NULL){
    last=last->next;
  }
  last->next=newNode(x);
}
void removeLoop(struct node* loop_node,struct node* head){
  struct node* root=NULL;
  struct node* loop=NULL;
  root=head;
  while(1){
    loop=loop_node;
    while(loop->next!=loop_node && loop->next!=root){
      loop=loop->next;
    }
    if(loop->next==root){
      break;
    }
    root=root->next;
  }
  loop->next=NULL;
}
int detectAndRemoveLoop(struct node* head){
  struct node* slow=head;
  struct node* fast=head;
  int length=0;
  while(slow!=NULL && fast!=NULL && fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;
    if(slow==fast){
      removeLoop(slow,head);
      return 1;
    }
  }
  return 0;;
}
void printList(struct node* head){
  while(head!=NULL){
    printf("%d\t",head->data);
    head=head->next;
  }
}
int main(){
  struct node* head = newNode(1); 
  insert(&head,2);
  insert(&head,3);
  insert(&head,4);
  insert(&head,5);
  //Create a loop
  head->next->next->next->next->next=head->next;
  int chck=detectAndRemoveLoop(head);
  if(chck){
    printf("Loop is detected in the linked list\n");
  }else{
    printf("Loop is not detected in the linked list\n");
  }
  printf("Linked list after removing loop:\n");
  printList(head);
  return 0;
}
