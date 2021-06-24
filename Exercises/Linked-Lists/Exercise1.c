/*Find the sum of two numbers represented by linked list
Ex: 
List 1: 3->8->5->6->2 represents 26583
List 2: 7->5 represents 57
Resultant list is: 0->4->6->6->2 represents 26640
*/

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
void insert(struct node* head,int x){
    struct node*last=head;
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
struct node* addList(struct node* head1,struct node* head2){
    struct node* res_head=NULL;
    struct node* temp=NULL;
    struct node* prev=NULL;
    int sum=0,carry=0;
    
    while(head1!=NULL || head2!=NULL){
    	 int sum1=0,sum2=0;
	     if(head1!=NULL){
           sum1=head1->data;
         }
         if(head2!=NULL){
             sum2=head2->data;
         }
         sum=sum1+sum2+carry;
        if(sum>=10){
            carry=1;
        }else{
            carry=0;
        }
        sum=sum%10;
        temp=newNode(sum);
        if(res_head==NULL){
            res_head=temp;
        }else{        
            prev->next=temp;
        }
        prev=temp;
        if(head1!=NULL){
            head1=head1->next;
        }
        if(head2!=NULL){
            head2=head2->next;
        }
    }
    if(carry>0){
        temp->next=newNode(carry);
    }
    return res_head;
}
int main(){
    struct node* head1 = newNode(3); 
    insert(head1,8);
    insert(head1,5);
    insert(head1,6);
    insert(head1,2);
    printf("List 1:\n");
    printList(head1);
    struct node* head2 = newNode(7); 
    insert(head2,5);
    printf("\nList 2:\n");
    printList(head2);
    struct node* result=addList(head1,head2);
    printf("\nResultant list:\n");
    printList(result);
    return 0;
}

