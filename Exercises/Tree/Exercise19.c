//Find the lowest common ancestor of a binary tree
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
struct node* lca(struct node* root,int n1,int n2){
	if(root==NULL){
		return NULL;
	}
	if(root->data==n1 || root->data==n2){
		return root;
	}
	struct node* left_lca=lca(root->left,n1,n2);
	struct node* right_lca=lca(root->right,n1,n2);
	if(left_lca!=NULL && right_lca!=NULL){
		return root;
	}
	if(left_lca!=NULL){
		return lca(root->left,n1,n2);
	}
	if(right_lca!=NULL){
		return lca(root->right,n1,n2);
	}
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
    int node1,node2;
	printf("Enter the node values:\n");
    printf("Node 1: ");
	scanf("%d",&node1);
	printf("Node 1: ");
	scanf("%d",&node2);
	struct node* res=lca(root,node1,node2);
    printf("Lowest common ancestor of %d and %d is: %d",node1,node2,res->data);
    return 0;
}
