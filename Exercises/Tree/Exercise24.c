//Check if Two Trees are Identical
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
int identicalTree(struct node* root1, struct node* root2){
    if(root1==NULL && root2==NULL){
        return 1;
    }
    if(root1!=NULL&&root2!=NULL){
        return ((root1->data==root2->data)
        &&identicalTree(root1->left,root1->left))
        && (identicalTree(root2->left,root2->right));
    }
    return 0;
}
int main() 
{ 
    struct node* root1=newNode(26); 
    root1->left=newNode(10); 
    root1->right=newNode(3); 
    root1->left->left=newNode(4); 
    root1->left->right=newNode(6); 
    root1->right->right=newNode(3); 
    struct node* root2=newNode(26); 
    root2->left=newNode(10); 
    root2->right=newNode(3); 
    root2->left->left=newNode(4); 
    root2->left->right=newNode(6); 
    root2->right->right=newNode(3); 
    int chck=identicalTree(root1,root2);
    if(chck){
        printf("\nBoth trees are identical");
    }
    else{
        printf("\nBoth trees are not identical");
    }
    return 0; 
}
