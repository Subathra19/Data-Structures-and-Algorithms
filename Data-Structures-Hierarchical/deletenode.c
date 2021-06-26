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
void inorder(struct node* root){
    if(root!=NULL){
    inorder(root->left);
    printf("%d\t",root->data);
    inorder(root->right);
    }
}
struct node* min(struct node* node){
    struct node* temp=node;
    while(temp!=NULL && temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}
struct node* deleteNode(struct node* root,int x){
    if(root==NULL){
        return NULL;
    }
    if(x<root->data){
        root->left=deleteNode(root->left,x);
    }
    if(x>root->data){
        root->right=deleteNode(root->right,x);
    }
    if(root->data==x){
        //To delete node with single child
        if(root->left==NULL){
            struct node* temp=root->right;
            free(root);
            return temp;
        }
        if(root->right==NULL){
            struct node* temp=root->left;
            free(root);
            return temp;
        }
        //To delete node with two children
        struct node* temp=min(root->right);
        root->data=temp->data;
        root->right=deleteNode(root->right,temp->data);
    }
    return root;
}
int main(){
	struct node *root = newNode(50);  
    root->left = newNode(30);  
    root->right = newNode(70);  
    root->left->left = newNode(20);  
    root->left->right = newNode(40); 
    root->right->left= newNode(60);
    root->right->right = newNode(80);
    int x;
	printf("Enter the node to be deleted:\n");
    scanf("%d",&x);
    printf("Given Binary tree:\n");
    inorder(root);
    root=deleteNode(root,x);
    printf("\nBinary tree after deletion:\n");
    inorder(root);
    return 0;
}
