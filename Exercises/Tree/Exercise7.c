//Find diameter of a binary tree
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
int max(int a,int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
int height(struct node* root){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL && root->right==NULL){
        return 1;
    }
    int left_h=height(root->left);
    int right_h=height(root->right);
    if(left_h>right_h){
        return left_h+1;
    }else{
        return right_h+1;
    }
}
int diameter(struct node* root){
    int h=height(root);
    if(root==NULL){
        return 0;
    }
    int left_h=height(root->left);
    int right_h=height(root->right);
    int left_d=diameter(root->left);
    int right_d=diameter(root->right);
    int d=max((left_h+right_h+1),max(left_d,right_d));
    return d;
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
    int res=diameter(root);
    printf("Diameter of binary tree is: %d",res);
    return 0;
}
