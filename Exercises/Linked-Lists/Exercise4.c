//Middle element of Linked List
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
void printNode(struct node* head,int mid){
    int p=1;
    while(head->next!=NULL){
        if(p==mid){
            printf("\nMiddle element of list is: %d", head->data);
            break;
        }
        head=head->next;
        p++;
    }
}
void findMiddle(struct node* head){
    int n=0;
    int p=0;
    struct node* temp=head;
    while(temp!=NULL){
        n++;
        temp=temp->next;
    }
    free(temp);
    int mid=(n+1)/2;
    printNode(head,mid);
}
void display(struct node* head){
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
int main()
{
    struct node* head=newNode(10);
    for(int i=20;i<100;i=i+10){
        insert(&head,i);
    }
    printf("Given linked list:\n");
    display(head);
    findMiddle(head);
    return 0;
}
