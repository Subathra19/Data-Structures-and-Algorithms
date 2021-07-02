//Check whether root to leaf path sum is equal to given number
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
}
int pathSum(struct node* root,int sum){
    if(root==NULL){
        if(sum==0){
            return 1;
        }
        return 0;
    }
    int flag=0;
    int cur_sum=sum-root->data;
    if(cur_sum==0){
        if(root->left==NULL&&root->right==NULL){
            return 1;
        }
    }
    if(root->left){
        flag=flag||(pathSum(root->left,cur_sum));
    }
    if(root->right){
        flag=flag||(pathSum(root->right,cur_sum));
    }
    return flag;
}
int main(){
    int sum=0;
    struct node *root = newNode(10);  
    root->left = newNode(8);  
    root->right = newNode(2);  
    root->left->left = newNode(3);  
    root->left->right = newNode(5);  
    root->right->left = newNode(2);  
    printf("Enter the sum value:");
    scanf("%d",&sum);
    int chck=pathSum(root,sum);
    if(chck){
        printf("Root to leaf path with sum %d exist",sum);  
    }else{
        printf("Root to leaf path with sum %d do not exist",sum);  
    }
    return 0;
}
