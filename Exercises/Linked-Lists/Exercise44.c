//Reverse a linked list

#include<stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
void reverseList(struct node** n){
    struct node* prev=NULL;
    struct node* next=NULL;
    struct node* cur=*n;
    while(cur!=NULL){
        next=cur->next;
        //Reverse the pointer
        cur->next=prev;
        //MOve one node ahead
        prev=cur;
        cur=next;
    }
    *n=prev;
}
void printList(struct node *n){
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
    printf("\nInput list:");
    printList(head);

    reverseList(&head);
    printf("\nList after reversal:");
    printList(head);
}
