//Search an element in a BST
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
int search(struct node* root, int x){
    if(root==NULL){
        return 0;
    }
    if(root->data==x){
        return 1;
    }
    int a=search(root->left,x);
    int b=search(root->right,x);
    return (a||b);
}
int main() 
{ 
    struct node* root=newNode(4);
    root->left=newNode(5);
    root->right=newNode(2);
    root->right->left=newNode(3);
    root->right->right=newNode(1);
    root->right->left->left=newNode(6);
    root->right->left->right=newNode(7);
    int x;
    printf("Enter the element to be searched:");
    scanf("%d",&x);
    int chck=search(root,x);
    if(chck){
        printf("\nElement found");
    }
    else{
        printf("\nElement not found");
    }
    return 0; 
}
