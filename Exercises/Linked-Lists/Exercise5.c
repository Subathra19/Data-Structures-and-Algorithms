//Reverse a linked list in a group of given size
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
struct node* reverseGroup(struct node *head,int k){
    struct node* prev=NULL;
    struct node* cur=head;
    struct node* temp=NULL;
    int count=0;
    while(cur!=NULL && count<k){
        temp=cur->next;
        cur->next=prev;
   
        prev=cur;
        cur=temp;
        count++;
    }
    if(temp!=NULL){
        head->next=reverseGroup(temp,k);
    }
    return prev;
}
void printList(struct node* head){
    while(head!=NULL){
        printf("%d\t",head->data);
        head=head->next;
    }
}
void insert(struct node**head,int x){
    struct  node*last=*head;
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    if(last==NULL){
        last->data=x;
        last->next=NULL;
    }
    while(last->next!=NULL){
        last=last->next;
    }
    last->next=newnode;
    newnode->data=x;
    newnode->next=NULL;
}
int main(){
    struct node* head = newNode(1); 
    insert(&head,2);
    insert(&head,3);
    insert(&head,4);
    insert(&head,5);
    insert(&head,6);
    insert(&head,7);
    insert(&head,8);
    insert(&head,9);
    int k=0;
    printf("Enter the group size:");
    scanf("%d",&k);
    printf("Input Linked List :\n");
    printList(head);
    head=reverseGroup(head,k);
    printf("\nReversed linked list:\n");
    printList(head);
    return 0;
}
