//Find minimum depth of a binary tree
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
int minDepth(struct node* root){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL &&root->right==NULL){
        return 1;
    }
    if(root->left==NULL){
        return minDepth(root->right)+1;
    }
    if(root->right==NULL){
        return minDepth(root->left)+1;
    }
    return min(minDepth(root->left),minDepth(root->right))+1;
}
int main(){
	struct node *root = newNode(1);  
    root->left = newNode(2);  
    root->right = newNode(3);  
    root->left->left = newNode(4);  
    root->left->right = newNode(5);  
    root->right->right = newNode(8);  
    root->right->right->left = newNode(6);  
    root->right->right->right = newNode(7);
    int res=minDepth(root);
    printf("Minimum depth of binary tree is: %d",res);
    return 0;
}
