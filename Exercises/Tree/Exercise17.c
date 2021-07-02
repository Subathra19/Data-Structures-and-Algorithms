//Check if a given Binary Tree is a Balanced Tree.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
int height(struct node* root){
    int l_h=0,r_h=0;
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL && root->right==NULL){
        return 1;
    }
    l_h=height(root->left);
    r_h=height(root->right);
    if(l_h>r_h){
        return l_h+1;
    }
    if(r_h>l_h){
        return r_h+1;
    }
}
int checkBalance(struct node* root){
    int left_h=0;
    int right_h=0;
    if(root==NULL){
        return 1;
    }
    left_h=height(root->left);
    right_h=height(root->right);
    if(abs(left_h-right_h<=1)){
        if(checkBalance(root->left)&&checkBalance(root->right)){
            return 1;    
        }
    }
    return 0;
}
int main(){
    // struct node* root = newNode(1); 
    // root->left = newNode(2); 
    // root->right = newNode(3); 
    // root->left->left = newNode(4); 
    // root->left->right = newNode(5); 
    // root->left->left->left = newNode(8); 
    struct node* root = newNode(1); 
    root->left = newNode(2); 
    root->right = newNode(3); 
    root->left->left = newNode(4); 
    root->left->right = newNode(5); 
    root->right->left = newNode(6); 
    root->left->left->left = newNode(7);
    int chck=checkBalance(root);
    if(chck){
        printf("Given tree is a balanced tree");
    }else{
        printf("Given tree is not a balanced tree");
    }
    return 0;
}
