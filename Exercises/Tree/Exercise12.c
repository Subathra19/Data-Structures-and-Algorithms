//Left view of binary tree
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
void leftViewPrint(struct node* root,int level,int *cur_level){
    if(root==NULL){
        return;
    }
    if(*cur_level<level){
        printf("%d\t",root->data);
        *cur_level=level;
    }
    leftViewPrint(root->left,level+1,cur_level);
    leftViewPrint(root->right,level+1,cur_level);
}
void leftView(struct node* root){
    int cur_level=0;
    leftViewPrint(root,1,&cur_level);
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
    leftView(root);
    return 0; 
}
