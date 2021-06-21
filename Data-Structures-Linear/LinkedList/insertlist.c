#include<stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
void prepend(struct node** n,int x){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=*n;
    *n=newnode;
}
void append(struct node** n,int x){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    struct node* last=*n;
    while(last->next!=NULL){
        last=last->next;
    }
    last->next=newnode;
}
void insertAtP(struct node** n,int x,int p){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    struct node* temp=*n;
    int i=1;
    while(i!=(p-1)){
        printf("i:%d",i);
        temp=temp->next;
        i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
void printList(struct node* n){
    while(n!=NULL){
        printf("%d\t",n->data);
        n=n->next;
    }
}
int main(){
    struct node* head=NULL;
    struct node* first=NULL;
    struct node* second=NULL;
    //Allocate memory
    head=(struct node*)malloc(sizeof(struct node));
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));

    head->data=1;
    head->next=first;
    first->data=2;
    first->next=second;
    second->data=3;
    second->next=NULL;
    printf("\n Initial List:");
    printList(head);

    //Prepend: Insert at begining
    int beg;
    printf("\nEnter the element to be inserted at begining:");
    scanf("%d",&beg);
    prepend(&head,beg);
    printf("\n After prepend:");
    printList(head);

    //Append: Insert at end
    int end;
    printf("\nEnter the element to be inserted at end:");
    scanf("%d",&end);
    append(&head,end);
    printf("\n After append:");
    printList(head);

    //Insert at given position
    int x,p;
    printf("\nEnter the position:");
    scanf("%d",&p);
    printf("\nEnter the element to be inserted at %d:",p);
    scanf("%d",&x);
    insertAtP(&head,x,p);
    printf("\n After insertion:");
    printList(head);
}
