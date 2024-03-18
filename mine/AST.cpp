#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the expression tree
typedef struct Node {
    int value; // For leaf nodes, it stores integer value
    char op;   // For operator nodes, it stores operator (+, -, *)
    struct Node* left;  // Pointer to the left child
    struct Node* right; // Pointer to the right child
} Node;

// Enum for different operations
typedef enum {
    ADD,
    SUB,
    MUL
} Operation;

// Function to create a leaf node with an integer value
Node* make_int(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->value = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to create an operation node with an operator and left and right child nodes
Node* make_op(Operation op, Node* left, Node* right) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->op = op == ADD ? '+' : op == SUB ? '-' : '*'; // Convert enum to char
    newNode->left = left;
    newNode->right = right;
    return newNode;
}

// Function to print the expression tree in infix notation
void print(Node* root) {
    if (root != NULL) {
        if (root->left != NULL || root->right != NULL) {
            printf("(");
        }
        print(root->left);
        printf("%c", root->op);
        print(root->right);
        if (root->left != NULL || root->right != NULL) {
            printf(")");
        }
    }
}

// Function to evaluate the expression tree recursively
int evaluate(Node* root) {
    if (root == NULL) {
        return 0;
    }
    if (root->left == NULL && root->right == NULL) {
        return root->value; // Leaf node, return its value
    }
    int leftVal = evaluate(root->left);
    int rightVal = evaluate(root->right);
    switch (root->op) {
        case '+':
            return leftVal + rightVal;
        case '-':
            return leftVal - rightVal;
        case '*':
            return leftVal * rightVal;
        default:
            printf("Invalid operator\n");
            return 0;
    }

   

}

 void free_tree(Node* root) {
    if (root != NULL) {
        free_tree(root->left);  // Free the left subtree
        free_tree(root->right); // Free the right subtree
        free(root);             // Free the current node
    }
}






int main()
{
    Node* v4 = make_int(4);
    Node* v5 = make_int(5);

    Node* e1 = make_op(ADD, v5, v4);

    Node* v7 = make_int(7);
    Node* v3 = make_int(3);

    Node* e2 = make_op(SUB, v7, v3);

    Node* e3 = make_op(MUL, e1, e2);

    print(e3); // (4+5)*(7-3)
    int r = evaluate(e3);
    printf("%d", r); // 36

    // Freeing the memory allocated for the expression tree
    free_tree(e3);


    return 0;

}