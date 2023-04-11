#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *create_node(int data) {
    struct node *new_node = (struct node*) malloc(sizeof(struct node));
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

struct node *insert_node(struct node *root, int data) {
    if (root == NULL) {
        root = create_node(data);
    } else if (data <= root->data) {
        root->left = insert_node(root->left, data);
    } else {
        root->right = insert_node(root->right, data);
    }
    return root;
}

struct node *construct_tree() {
    struct node *root = NULL;
    int n, data;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    printf("Enter the data for each node:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        root = insert_node(root, data);
    }
    return root;
}

struct node *search_node(struct node *root, int data) {
    if (root == NULL || root->data == data) {
        return root;
    } else if (data < root->data) {
        return search_node(root->left, data);
    } else {
        return search_node(root->right, data);
    }
}

int main() {
    struct node *root = construct_tree();
    int data;
    printf("Enter the value to search: ");
    scanf("%d", &data);
    struct node *result = search_node(root, data);
    if (result == NULL) {
        printf("Value not found\n");
    } else {
        printf("Value found\n");
    }
    return 0;
}