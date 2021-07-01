//Merge Sort for Linked List
#include <stdio.h>
#include <stdlib.h>
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
void insert(struct node** head1,int x){
    struct node*last=*head1;
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
struct node* merge(struct node*a, struct node*b){
    struct node* temp=NULL;
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }
    if(a->data<=b->data){
        temp=a;
        temp->next=merge(a->next,b);
    }else{
        temp=b;
        temp->next=merge(a,b->next);
    }
    return temp;
}
void frontBackPartition(struct node* root, struct node** front, struct node ** back){
    struct node* a=root;
    struct node* b=root->next;
    //a advances one node
    //b advances two nodes
    while(b!=NULL){
        b=b->next;
        if(b!=NULL){
            a=a->next;
            b=b->next;
        }
    }
    *front=root;
    *back=a->next;
    a->next=NULL;
}
void sortList(struct node** head){
    //Create front and back 
    //similar to left right arrays in merge sort
    struct node* front=NULL;
    struct node* back=NULL;
    struct node* root=*head;
    if(root==NULL){
        return;
    }
    //Sinlge node->No need to sort
    if(root->next==NULL){
        return;
    }
    frontBackPartition(root,&front,&back);
    sortList(&front);
    sortList(&back);
    //Merge the sorted front and back list and assign to head
    *head=merge(front,back);
}

int main(){
  struct node* head = newNode(3); 
  insert(&head,1);
  insert(&head,5);
  insert(&head,2);
  insert(&head,4);
  printf("Input Linked List :\n");
  printList(head);
  sortList(&head);
	printf("\nSorted list:\n");
	printList(head);
  return 0;
}

