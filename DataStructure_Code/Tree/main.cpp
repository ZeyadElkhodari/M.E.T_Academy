#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* left;
    Node* right;
};

Node* newNode(int value) {
    Node* n = new Node;
    n->value = value;
    n->left = n->right = NULL;
    return n;
}

Node* insertNode(Node* root, int value) {
    if (root == NULL) return newNode(value);

    if (value < root->value)
        root->left = insertNode(root->left, value);
    else if (value > root->value)
        root->right = insertNode(root->right, value);

    return root;
}

void printInorder(Node* root) {
    if (root == NULL) return;
    printInorder(root->left);
    cout << root->value << " ";
    printInorder(root->right);
}

int main() {
    Node* root = NULL;

    root = insertNode(root, 10);
    insertNode(root, 30);
    insertNode(root, 25);
    insertNode(root, 36);
    insertNode(root, 56);
    insertNode(root, 78);

    cout << "Inorder Traversal of Binary Search Tree:\n";
    printInorder(root);
    cout << endl;

    return 0;
}
