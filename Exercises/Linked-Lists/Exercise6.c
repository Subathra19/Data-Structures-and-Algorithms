//Pairwise swap elements of a given linked list
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
void swapPair(struct node* head){
    struct node* root=head;
    int temp=0;
    if(root==NULL){
        return;
    }
    while(root!=NULL && root->next!=NULL){
        //swap
        temp=root->data;
        root->data=root->next->data;
        root->next->data=temp;
        root=root->next->next;
    }
}
int main(){
    struct node* head = newNode(1); 
    insert(&head,2);
    insert(&head,3);
    insert(&head,4);
    insert(&head,5);
    printf("Input Linked List :\n");
    printList(head);
    swapPair(head);
    printf("\nLinked list after pair wise swap of elements:\n");
    printList(head);
    return 0;
}
