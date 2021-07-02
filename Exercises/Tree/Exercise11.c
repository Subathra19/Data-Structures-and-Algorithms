//Reverse order traversal of binary tree
#include<stdio.h>
#include<stdlib.h>
struct node { 
    int data; 
    struct node* left;
	struct node* right; 
}; 
struct node* newNode(int x){ 
    struct node* temp =(struct node*)malloc(sizeof(struct node)); 
    temp->data = x; 
    temp->left = NULL; 
    temp->right = NULL; 
    return(temp); 
} 
int height(struct node*root){
    if(root==NULL){
        return 0;
    }
    int l_h=height(root->left);
    int r_h=height(root->right);
    if(l_h>r_h){
        return l_h+1;
    }else{
        return r_h+1;
    }
}  
void printLevel(struct node* root, int level){ 
    if (root == NULL){
    	return;
	}
    if (level == 1) {
        printf("%d ", root->data);
	}
    else if (level > 1) { 
        printLevel(root->left, level-1); 
        printLevel(root->right, level-1); 
    } 
} 
void levelOrderTraversal(struct node* root){ 
    int h = height(root); 
    for (int i=h; i>=0; i--){ 
        printLevel(root, i); 
    }
} 
int main(){ 
   struct node* root=newNode(4);
    root->left=newNode(5);
    root->right=newNode(2);
    root->right->left=newNode(3);
    root->right->right=newNode(1);
    root->right->left->left=newNode(6);
    root->right->left->right=newNode(7);
    printf("Level Order traversal of binary tree is \n"); 
    levelOrderTraversal(root); 
    return 0; 
} 
