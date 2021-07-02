//Find maximum width of a binary tree
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
int getWidth(struct node* root,int level){
    if(root == NULL){
        return 0;  
    }
          
    if(level == 1){
        return 1;  
    }
    if (level > 1){
        int left_width=getWidth(root->left, level - 1);  
        int right_width=getWidth(root->right, level - 1);
        return (left_width+right_width);
    }
}
int maximumWidth(struct node* root){
    int h=height(root);
    int width=0;
    int max=0;
    for(int i=1;i<=h;i++){
        width=getWidth(root,i);
        if(width>max){
            max=width;
        }
    }
    return max;
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
    int res=maximumWidth(root);
    printf("Maximum width of binary tree is: %d",res);
    return 0;
}
