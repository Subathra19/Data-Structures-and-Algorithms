#include<stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
void deleteList(struct node** n){
    struct node* cur=*n;
    struct node* temp=NULL;
    while(cur!=NULL){
        temp=cur->next;
        free(cur);
        cur=temp;
    }
    *n=NULL;
}
void delete(struct node** n,int x){
    struct node* temp=*n;
    struct node* prev=*n;
    //If head node contains the data
    if(temp->data==x){
        *n=temp->next;
    }
    while(temp!=NULL && temp->data!=x){
        prev=temp;
        temp=temp->next;
    }
    if (temp==NULL){
        printf("Element not found");
    }
    else{
        prev->next=temp->next;
    }
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
    printf("\n Initial List:");
    printList(head);

    int x;
    printf("\nEnter the element to be deleted:");
    scanf("%d",&x);
    delete(&head,x);
    printf("\n After deletion:");
    printList(head);

    char delete;
    printf("\nDo you want to delete the list?\n Enter (y/n):");
    scanf("%c",&delete);
    if(delete=='y'){
        deleteList(&head);
        printf("\nList deleted succesfully");
    }
}
