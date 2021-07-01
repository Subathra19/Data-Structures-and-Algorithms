//Given only a pointer/reference to a node to be deleted in a singly linked list, how do you delete it?
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
void insert(struct node* head,int x){
  struct node* last=head;
  if(last==NULL){
    last->data=x;
    last->next=NULL;
  }
  while(last->next!=NULL){
    last=last->next;
  }
  last->next=newNode(x);
}
void printList(struct node* head){
  while(head!=NULL){
    printf("%d\t",head->data);
    head=head->next;
  }
}
void deleteFirstNode(struct node* head){
  struct node* temp=head;
  //copy next nodes into the node to be deleted
  //and delete the next node
  head->data=temp->data;
  head->next=temp->next;
  free(temp);
}
void deleteNode(struct node* head,int x){
  if(head==NULL){
    return;
  }
  struct node* temp=head;
  struct node* prev=NULL;
  while(temp->data!=x){
    prev=temp;
    temp=temp->next;
  }
  if(temp->data==x){
    prev->next=temp->next;
    free(temp);
  }
}
int main(){
  struct node* head=newNode(1);
  insert(head,2);
  insert(head,3);
  insert(head,4);
  insert(head,5);
  printf("Input Linked List:\n");
  printList(head);
  printf("\nLinked list after deletion:\n");
  printList(head);
  return 0;
}
