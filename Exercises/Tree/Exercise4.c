//Print binary tree in vertical order
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
void printNode(struct node* root,int line_no,int horizontal_d){
    if(root==NULL){
        return;
    }
    if(horizontal_d==line_no){
        printf("%d\t",root->data);
    }
    printNode(root->left,line_no,horizontal_d-1);
    printNode(root->right,line_no,horizontal_d+1);
}
void findDistance(struct node *root,int *min,int *max,int horizontal_d){
    if(root==NULL){
        return;
    }
    if(horizontal_d<*min){
        *min=horizontal_d;
    }
    if(horizontal_d>*max){
        *max=horizontal_d;
    }
    findDistance(root->left,min,max,horizontal_d-1);
    findDistance(root->right,min,max,horizontal_d+1);
}
void verticalOrder(struct node *root){
    //Find min max horizontal dist of node wrt root
    int min=0;
    int max=0;
    findDistance(root,&min,&max,0);
    //Print nodes line by line
    //i->Vertical line number
    for(int i=min;i<=max;i++){
        printNode(root,i,0);
        printf("\n");
    }
}
int main()
{
    struct node* root = newNode(1); 
    root->left = newNode(2); 
    root->right = newNode(3); 
    root->left->left = newNode(4); 
    root->left->right = newNode(5); 
    root->right->left = newNode(6); 
    root->right->right = newNode(7); 
    root->right->left->right = newNode(8); 
    root->right->right->right = newNode(9); 
    printf("Vertical order of Binary tree is:\n");
    verticalOrder(root);
    return 0;
}
