#include<stdio.h>
#include<stdlib.h>
struct stackNode{
    int data;
    struct stackNode* next;
};
void push(struct stackNode** n,int x){
    struct stackNode* newNode=(struct stackNode*)malloc(sizeof(struct stackNode));
    newNode->data=x;
    if(*n==NULL){
        newNode->next=NULL;
    }else{
        newNode->next=*n;
    }
    *n=newNode;
}
void pop(struct stackNode** n){
    struct stackNode* temp=*n;
    *n=(*n)->next;
    free(temp);
}
int peek(struct stackNode* n){
    if(n==NULL){
        return -1;
    }
    else{
        return n->data;
    }
}
void printStack(struct stackNode* n){
    while(n!=NULL){
        printf("%d\t",n->data);
        n=n->next;
    }
}
int main(){
    struct stackNode* head=NULL;
    push(&head,1);
    push(&head,2);
    push(&head,3);
    printf("Stack after push operation:");
    printStack(head);

    int p;
    printf("\nEnter 1 if you want to pop the element else 0:");
    scanf("%d",&p);
    if(p==1){
        pop(&head);
        printf("Stack after pop operation:");
        printStack(head);
    }

    int x;
    printf("\nEnter 1 if you want to get the top element of stack else 0:");
    scanf("%d",&x);
    if(x==1){
        printf("\nTop element of stack is: %d",peek(head));
    }
    return 0;
}
