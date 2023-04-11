#include<stdio.h>
#include<stdlib.h>

struct node{

int data;
struct node *left;
struct node *right;
};
struct node *create_node(int data){

struct node *new_node= (struct node*)malloc(sizeof(struct node));
new_node->data=data;
new_node->left=NULL;
new_node->right=NULL;
return new_node;
}

struct node *insert_node(struct node *root,int data){
if(root==NULL){
   return create_node(data);
   }else if(data < root->data){

    root->left=insert_node(root->left,data);

   }
   else if(data > root->data){
    root->right=insert_node(root->right,data);
   }
return root;
}
void postorder_traversal(struct node *root){
if(root!=NULL){
   postorder_traversal(root->left);

   postorder_traversal(root->right);
   printf("%d",root->data);
}
   }
   int main(){

   struct node *root = NULL;
    int n, data;
    printf("Enter the number of nodes in the binary search tree: ");
    scanf("%d", &n);
    printf("Enter the values of the nodes:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        root = insert_node(root, data);
    }
    printf("Postorder Traversal of the Binary Search Tree: ");
    postorder_traversal(root);
    printf("\n");

    return 0;}