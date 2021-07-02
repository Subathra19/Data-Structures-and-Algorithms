//Convert an array into a Binary Search Tree(BST)
#include <stdio.h>
#include <stdlib.h>
void insertionSort(int a[],int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int key=a[i];
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
}
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
struct node* arrayToBST(int a[],int l,int h){
    int mid=l+(h-l)/2;
    if(l<=h){
    struct node *temp=newNode(a[mid]);
    temp->left=arrayToBST(a,l,mid-1);
    temp->right=arrayToBST(a,mid+1,h);
    return temp;
    }
    return NULL;
}
void preOrder(struct node* root){
    if(root==NULL){
        return;
    }
    printf("%d\t",root->data);
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(struct node* root){
    if(root==NULL){
        return;
    }
    preOrder(root->left);
    printf("%d\t",root->data);
    preOrder(root->right);
}
void postOrder(struct node* root){
    if(root==NULL){
        return;
    }
    preOrder(root->left);
    preOrder(root->right);
    printf("%d\t",root->data);
}
int main(){
    int a[]={2,4,1,5,3};
    int n=sizeof(a)/sizeof(a[0]);
    insertionSort(a,n);
    printf("Input array:");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    struct node* root=arrayToBST(a,0,n-1);
    printf("\nInorder traversal of binary tree:\n");
    inOrder(root);
    printf("\nPreorder traversal of binary tree:\n");
    preOrder(root);
    printf("\nPostorder traversal of binary tree:\n");
    postOrder(root);
    return 0;
}
