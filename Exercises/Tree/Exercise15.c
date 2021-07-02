//Check if two trees are mirror of each other
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
int checkMirror(struct node*root1,struct node* root2){
    if(root1==NULL && root2==NULL){
        return 1;
    }
    //Only one tree is empty
    if(root1==NULL || root2==NULL){
        return 0;
    }
    if(root1->data==root2->data){
        int x=checkMirror(root1->left,root2->right);
        int y=checkMirror(root1->right,root2->left);
        if(x&&y){
            return 1;
        }
    }
    return 0;
}
void inOrder(struct node* root){
	if(root!=NULL){
		inOrder(root->left);
		printf("%d\t",root->data);
		inOrder(root->right);
	}
	return;
}
int main(){
    struct node*root1 = newNode(1); 
    root1->left = newNode(2); 
    root1->right = newNode(3); 
    root1->left->left  = newNode(4); 
    root1->left->right = newNode(5); 
  
    struct node *root2 = newNode(1);  
    root2->left = newNode(3); 
    root2->right = newNode(2); 
    root2->right->left = newNode(5); 
    root2->right->right = newNode(4);
    int chck= checkMirror(root1,root2);
    printf("Inorder traversal of Binary tree1:\n");
	inOrder(root1);
    printf("\nInorder traversal of Binary tree2:\n");
    inOrder(root2);
	if(chck){
        printf("\nGiven Binary trees are mirror of each other");
    }else{
        printf("Given Binary trees are not mirror of each other");
    }
}
