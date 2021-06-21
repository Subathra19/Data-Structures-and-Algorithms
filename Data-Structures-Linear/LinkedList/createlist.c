#include<stdio.h>
struct node{
    int data;
    struct node* next;
};
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

    printList(head);
}
