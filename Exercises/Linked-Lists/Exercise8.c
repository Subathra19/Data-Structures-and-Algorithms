//Delete every kth node from list
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
void emptyList(struct node* head){
  while(head!=NULL){
    struct node* temp=head->next;
    free(head);
    head=temp;
  }
}
struct node* deleteKNode(struct node* head,int k){
  if(head==NULL){
    return NULL;
  }
  if(k==1){
    emptyList(head);
    return NULL;
  }
  struct node* temp=head;
  struct node* prev=NULL;
  int count=0;
  while(temp!=NULL){
    count++;
    if(k==count){
      free(prev->next);
      prev->next=temp->next;
      count=0; 
    }
    if(count!=0){
      prev=temp;
    }
    temp=prev->next;
  }
  return head;
}
int main(){
  int n;
  struct node* head = newNode(1); 
  insert(head,2);
  insert(head,3);
  insert(head,4);
  insert(head,5);
  printf("Input Linked List:\n");
  printList(head);
  int k=0;
  printf("\n Enter k value:");
  scanf("%d",&k);
  head=deleteKNode(head,k);
  printf("Output Linked List:\n");  
  printList(head);
  return 0;
}
