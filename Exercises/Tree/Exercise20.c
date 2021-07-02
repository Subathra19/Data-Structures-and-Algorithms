//Maximum difference between a node and its ancestor in a binary tree
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
int min(int a, int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}
int maxDiff(struct node* root, int *res){ 
    if (root== NULL){
        return INT_MAX; 
	}
    if (root->left == NULL && root->right == NULL){
        return root->data; 
	}
	int lft=maxDiff(root->left, res);
	int rght=maxDiff(root->right, res);
    int val = min(lft,rght);   
   	if(root->data-val>*res){
   		*res=root->data-val;
	}
	return min(val, root->data); 
} 
int maxDiffNode(struct node *root){ 
    int res = 0; 
    maxDiff(root, &res); 
    return res; 
} 
int main(){  
    struct node* root=newNode(8); 
    root->left = newNode(3); 
    root->left->left = newNode(1); 
    root->left->right = newNode(6); 
    root->left->right->left = newNode(4); 
    root->left->right->right = newNode(7); 
    root->right = newNode(10); 
    root->right->right = newNode(14); 
    root->right->right->left = newNode(13); 
    printf("Maximum difference between a node and"
           " its ancestor is : %d", maxDiffNode(root)); 
} 
