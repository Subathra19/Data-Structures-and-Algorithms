//Find distance from root to a given node in binary tree
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
int findDistance(struct node* root,int k){
    if(root==NULL){
        return -1;
    }
    int dist=-1;
    if(root->data==k){
        return dist+1;
    }
    int left_dist=findDistance(root->left,k);
    int right_dist=findDistance(root->right,k);
    if(left_dist>=0){
        return left_dist+1;
    }
    if(right_dist>=0){
        return right_dist+1;
    }
    return dist;
}
int main()
{
    struct node* root=newNode(5); 
    root->left = newNode(10); 
    root->right = newNode(15); 
    root->left->left = newNode(20); 
    root->left->right = newNode(25); 
    root->left->right->right = newNode(45); 
    root->right->left = newNode(30); 
    root->right->right = newNode(35);
    int k;
    printf("Enter node value:");
    scanf("%d",&k);
    int d=findDistance(root,k);
    printf("Distance from root to node %d is: %d",k,d);
    return 0;
}
