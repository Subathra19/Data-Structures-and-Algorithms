#include<stdio.h>
#include<stdlib.h>
struct queueNode{
    int data;
    struct queueNode* next;
};
void enqueue(struct queueNode** n,int x){
    struct queueNode* newNode=(struct queueNode*)malloc(sizeof(struct queueNode));
    newNode->data=x;
    newNode->next=NULL;
    struct queueNode* temp=*n;
    if(*n==NULL){
        *n=newNode;
    }
    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }
}
void dequeue(struct queueNode** n){
    struct queueNode* temp=*n;
    *n=(*n)->next;
    free(temp);
}

void printQueue(struct queueNode* n){
    while(n!=NULL){
        printf("%d\t",n->data);
        n=n->next;
    }
}
int main(){
    struct queueNode* head=NULL;
    enqueue(&head,1);
    enqueue(&head,2);
    enqueue(&head,3);
    printf("Stack after enqueue operation:");
    printQueue(head);

    int p;
    printf("\nEnter 1 if you want to remove the element else 0:");
    scanf("%d",&p);
    if(p==1){
        dequeue(&head);
        printf("Queue after dequeue operation:");
        printQueue(head);
    }
    return 0;
}
