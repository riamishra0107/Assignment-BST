#include <stdio.h>
#include <stdlib.h>

// Node structure
struct node {
    int data;
    struct node *left;
    struct node *right;
};

// Function to create a new node
struct node* createNode(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;

}
struct node *insert_node(struct node *root,int data){
if(root==NULL){
   return createNode(data);
   }else if(data < root->data){

    root->left=insert_node(root->left,data);

   }
   else if(data > root->data){
    root->right=insert_node(root->right,data);
   }
return root;
}

// Function for inorder traversal
void inorder(struct node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

// Function for postorder traversal
void postorder(struct node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

// Function for preorder traversal
void preorder(struct node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

int main() {
     struct node *root = NULL;
    int n, data;
    printf("Enter the number of nodes in the binary search tree: ");
    scanf("%d", &n);
    printf("Enter the values of the nodes:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        root = insert_node(root, data);
    }

    printf("Inorder traversal: ");
    inorder(root);

    printf("\nPostorder traversal: ");
    postorder(root);

    printf("\nPreorder traversal: ");
    preorder(root);

    return 0;
}