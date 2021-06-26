#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
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
}
int bst(struct node* root,int min,int max){
    if(root==NULL){
        return 1;
    }
    if(root->data<min || root->data>max){
        return 0;
    }
    int lft=bst(root->left,min,root->data);
    int rght=bst(root->right,root->data,max);
    return (lft&& rght);
}
int main(){
    struct node *root=newNode(4); 
    root->left=newNode(2); 
    root->right=newNode(5); 
    root->left->left=newNode(1); 
    root->left->right=newNode(3);  
    int chck=bst(root,0,INT_MAX);
    if(chck){
        printf("Given tree is a binary search tree");
    }else{
        printf("Given tree is not a binary search tree");
    }
    return 0;
}
