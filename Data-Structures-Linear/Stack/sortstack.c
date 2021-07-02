//Sort a stack
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
void push(struct node**root,int x){
    struct node* temp=newNode(x);
    temp->next=*root;
    *root=temp;
    //printf("\n%d pushed successfully into the stack",x);
}
int pop(struct node** root){
    if(*root==NULL){
        return 0;
    }
    struct node* temp=*root;
    *root=(*root)->next;
    int x=temp->data;
    free(temp);
    return x;
}
int peek(struct node* root){
    if(root==NULL){
        return 0;
    }
    return root->data;
}
void display(struct node* root){
    while(root!=NULL){
        printf("%d\t",root->data);
        root=root->next;
    }
}
struct node* sort(struct node* root){
    struct node* temp=NULL;
    while(root!=NULL){
        int x=peek(root);
        pop(&root);
        
        while(temp!=NULL && peek(temp)>x){
                push(&root,peek(temp));
                pop(&temp);
        }
        push(&temp,x);
    }
    return temp;
}
int main(){
    struct node* root=NULL;
    push(&root,5);
    push(&root,2);
    push(&root,4);
    push(&root,1);
    push(&root,3);
    printf("\nInput stack:\n");
    display(root);
    struct node* tempStack=sort(root);
    printf("\nSorted elements in stack:\n");
    display(tempStack);
    return 0;
}
