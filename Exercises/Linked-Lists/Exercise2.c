//Check if a linked list is a circular list
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
int checkCircular(struct node* head){
    struct node* root=head;
    if(root==NULL){
        return 1;
    }
    while(root->next!=NULL && root->next!=head){
        root=root->next;
    }
    if(root->next==head){
        return 1;
    }
    return 0;
}
int main()
{
    struct node* head = newNode(1); 
    insert(&head,2);
    insert(&head,3);
    insert(&head,4);
    insert(&head,5);
    //create circular list
    head->next->next->next->next->next=head;
    int chck=checkCircular(head);
    if(chck){
        printf("\nGiven list is a circular linked list");
    }else{
        printf("\nGiven list is not a circular linked list");
    }
    return 0;
}

