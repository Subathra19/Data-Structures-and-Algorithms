//Check if a given Binary Tree is SumTree
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
int sum(struct node* root){
    if(root==NULL){
        return 0;
    }
    return (sum(root->left)+root->data+sum(root->right));
}
int sumTree(struct node* root){
    if(root==NULL){
        return 1;
    }
    if(root->left==NULL&&root->right==NULL){
        return 1;
    }
    int lft_sum=sum(root->left);
    int rght_sum=sum(root->right);
    if(lft_sum+rght_sum==root->data){
        if(sumTree(root->left)&&sumTree(root->right)){
            return 1;
        }
    }
    return 0;
}
int main() 
{ 
    struct node* root=newNode(26); 
    root->left=newNode(10); 
    root->right=newNode(3); 
    root->left->left=newNode(4); 
    root->left->right=newNode(6); 
    root->right->right=newNode(3); 
    int chck=sumTree(root);
    if(chck){
        printf("\nGiven tree is sum tree");
    }
    else{
        printf("\nGiven tree is not sum tree");
    }
    return 0; 
}
