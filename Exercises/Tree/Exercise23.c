//Count the number of BST nodes in the given range
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* newNode(int x){
    struct node* temp=(struct node*) malloc(sizeof(struct node));
    temp->data=x;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
void countNodes(struct node* root,int l,int h,int *count){
    if(root==NULL){
        return;
    }
    if(root->data>=l &&root->data<=h){
       *count=*count+1;
       printf("%d\t",root->data);
    }
    countNodes(root->left,l,h,count);
    countNodes(root->right,l,h,count);
}
int main(){
    struct node* root=newNode(10); 
    root->left=newNode(5); 
    root->right=newNode(50); 
    root->left->left=newNode(1); 
    root->right->left=newNode(40); 
    root->right->right=newNode(100);
    int l,h;
    printf("Enter the range:\n");
    printf("\nEnter lower value:");
    scanf("%d",&l);
    printf("\nEnter higher value:");
    scanf("%d",&h);
    printf("The nodes in the range of %d and %d is:\n",l,h);
    int count=0;
    countNodes(root,l,h,&count);
    printf("\nTotal count: %d",count);
}
