//Find the length of loop in linked list
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
int countNodes(struct node* loop_node){
  int count=1;
  struct node*temp=loop_node;
  while(temp->next!=loop_node){
    temp=temp->next;
    count++;
  }
  return count;
}
int loopLength(struct node* head){
  struct node* slow=head;
  struct node* fast=head;
  while(slow!=NULL && fast!=NULL && fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;
    if(slow==fast){
      return countNodes(slow);
    }
  }
  return 0;
}
int main(){
  struct node* head = newNode(1); 
  insert(&head,2);
  insert(&head,3);
  insert(&head,4);
  insert(&head,5);
  //Create a loop
  head->next->next->next->next=head->next;
  int l=loopLength(head);
  printf("\nlength of loop in linked list is: %d",l);
  return 0;
}
