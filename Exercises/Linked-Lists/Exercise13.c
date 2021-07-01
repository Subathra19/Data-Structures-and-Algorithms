//Split circular list into two halves
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
void splitCircularList(struct node* head,struct node** head1,struct node** head2){
  struct node* slow=head;
  struct node* fast=head;
  if(head==NULL){
    return;
  }
  //fast->next becomes head for odd number of nodes
  //fast->next->next becomes head for even number of nodes
  while(fast->next!=head && fast->next->next!=head){
    slow=slow->next;
    fast=fast->next->next;
  }
  //For odd nodes: fast->next will be head node 
  //For even nodes: fast->next->next will be head, 
  //Hence, we need to move fast pointer 
  if(fast->next->next==head){
    fast=fast->next;
  }
  //Now slow=>mid node
  //fast=>last node
  *head1=head;
  if(head->next!=head){
    *head2=slow->next;
  }
  //Make second list as circular
  fast->next=slow->next;
  //Make first list as circular
  slow->next=head;
}
void printList(struct node* head){
  if(head==NULL){
    return;
  }
  struct node* root=head;
  //Use do while for circular linked list
  do{
    printf("%d\t",root->data);
    root=root->next;
  }while(root!=head);
}
int main(){
  struct node* head = newNode(1); 
  insert(&head,2);
  insert(&head,3);
  insert(&head,4);
  insert(&head,5);
  //create circular list
  head->next->next->next->next->next=head;
  printf("Input circular list:\n");
  printList(head);
  struct node* head1=NULL;
  struct node* head2=NULL;
  splitCircularList(head,&head1,&head2);
  printf("\nFirst circular linked list:\n");
  printList(head1);
  printf("\nSecond circular linked list:\n");
  printList(head2);
  return 0;
}

