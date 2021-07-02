//Mirror Tree
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
void inorder(struct node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    printf("%d\t",root->data);
    inorder(root->right);
}
void mirrorTree(struct node* root){
    if(root==NULL){
        return;
    }
    mirrorTree(root->left);
    mirrorTree(root->right);
    struct node* temp=root->left;
    root->left=root->right;
    root->right=temp;
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
    printf("Inorder traversal of tree:\n");
    inorder(root);
    mirrorTree(root);
    printf("\nInorder traversal of mirror tree:\n");
    inorder(root);
    return 0; 
}
