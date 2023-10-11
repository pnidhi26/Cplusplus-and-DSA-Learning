#include <iostream>
using namespace std;

// -------------- DFS Implementation ----------------

// preorder (Data, Left, Right) ---> DLR
// inorder (Left, Data, Right)  ---> LDR
// postorder (Left, Right, Data) ---> LRD

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

// recursive function to print a tree

// Preorder --> DLR
void printTreePreorder(Node* root) {
    if(root == nullptr) return;
    cout << root->data << endl;
    printTreePreorder(root->left);
    printTreePreorder(root->right);
}

// Inorder --> LDR
void printTreeInorder(Node* root) {
    if(root == nullptr) return;
    printTreeInorder(root->left);
    cout << root->data << endl;
    printTreeInorder(root->right);
}

// PostOrder --> LRD
void printTreePostorder(Node* root) {
    if(root == nullptr) return;
    printTreePostorder(root->left);
    printTreePostorder(root->right);
    cout << root->data << endl;
}

int main() {
    // Level 1
    Node* root = createNode(1); // create root node

    // Level 2
    root->left = createNode(2);
    root->right = createNode(3);

    // Level 3
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    // Level 4
    root->left->right->left = createNode(9);
    root->right->right->left = createNode(15);

    cout << "Preorder: " << endl;
    printTreePreorder(root);
    cout << "Inorder: " << endl;
    printTreeInorder(root);
    cout << "Postorder: " << endl;
    printTreePostorder(root);
    
    cin.get();
}       