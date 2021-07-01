//Print nth node from end of linked list
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
void insert(struct node*head,int x){
    struct  node*last=head;
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
void printNode(struct node* head,int n){
    int length=0;
    struct node* temp= head;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    if(n>length){
        return;
    }
    temp=head;
    for(int i=1;i<length-n+1;i++){
        temp=temp->next;
    }
    printf("\nNth node from end of linked list is: %d",temp->data);
}
int main()
{
    int n;
    struct node* head = newNode(1); 
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    printf("Input Linked List:\n");
    printList(head);
    printf("\nEnter node value:");
    scanf("%d",&n);
    printNode(head,n);
    return 0;
}
