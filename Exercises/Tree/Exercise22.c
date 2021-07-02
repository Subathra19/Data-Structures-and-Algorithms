//Find the minimum distance between two given nodes in a binary tree
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
int dist(struct node *lca,int node,int level){
	if(lca==NULL){
		return -1;
	}
	if(lca->data==node){
		return level;
	}
	int lft_d= dist(lca->left,node,level+1);
	if(lft_d==-1){
		return dist(lca->right,node,level+1);
	}
	return lft_d;
}
int distance(struct node* root,int n1,int n2){
	struct node*ancestor=lca(root,n1,n2);
	int d1=dist(ancestor,n1,0);
	int d2=dist(ancestor,n2,0);
	return d1+d2;
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
	printf("Enter the two node values:\n");
    printf("Node 1: ");
	scanf("%d",&node1);
	printf("Node 2:");
    scanf("%d",&node2);
    int res=distance(root,node1,node2);
    printf("Distance between nodes %d and %d of binary tree is: %d",node1,node2,res);
    return 0;
}
