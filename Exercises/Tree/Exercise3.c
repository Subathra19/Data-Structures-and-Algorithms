//Print a node with no siblings in a binary tree
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* newNode(int x){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
int min(int a,int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}
void printNosibling(struct node* root){
    if(root==NULL){
        return;
    }
    if(root->left==NULL){
        printf("%d\t",root->right->data);
    }
    if(root->right==NULL){
        printf("%d\t",root->left->data);
    }
    if(root->left!=NULL && root->right!=NULL){
        printNosibling(root->left);
        printNosibling(root->right);
    }
}
int main(){
	struct node *root = newNode(1); 
    root->left = newNode(2); 
    root->right = newNode(3); 
    root->left->right = newNode(4); 
    root->right->left = newNode(5); 
    root->right->left->left = newNode(6); 
    printNosibling(root);
    return 0;
}
