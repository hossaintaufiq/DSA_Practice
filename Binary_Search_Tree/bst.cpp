#include "bst.h"
#include <iostream>
using namespace std;

BST::BST() {
    root = NULL;
}

BST::~BST() {
    deleteTree(root);
}

void BST::Insert(int data) {
    root = Insert(root, data);
}

bool BST::Search(int data) {
    return Search(root, data);
}

void BST::Delete(int data) {
    root = Delete(root, data);
}

void BST::Print(TraversalType type) {
    cout << "BST (";
    switch (type) {
        case IN_ORDER:    cout << "In-order): ";    break;
        case PRE_ORDER:   cout << "Pre-order): ";   break;
        case POST_ORDER:  cout << "Post-order): ";  break;
    }
    Print(root, type);
    cout << endl;
}

Node* BST::Insert(Node* root, int data) {
    if (root == NULL) {
        Node* newNode = new Node();
        newNode->data = data;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
    }
    if (data < root->data)
        root->left = Insert(root->left, data);
    else
        root->right = Insert(root->right, data);
    return root;
}

bool BST::Search(Node* root, int data) {
    if (root == NULL) return false;
    if (data == root->data) return true;
    if (data < root->data) return Search(root->left, data);
    return Search(root->right, data);
}

Node* BST::Delete(Node* root, int data) {
    if (root == NULL) return root;

    if (data < root->data) {
        root->left = Delete(root->left, data);
    } else if (data > root->data) {
        root->right = Delete(root->right, data);
    } else {
        if (root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        } else if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        } else {
            Node* temp = findMin(root->right);
            root->data = temp->data;
            root->right = Delete(root->right, temp->data);
        }
    }
    return root;
}

void BST::Print(Node* root, TraversalType type) {
    if (root == NULL) return;
    switch (type) {
        case IN_ORDER:
            Print(root->left, type);
            cout << root->data << " ";
            Print(root->right, type);
            break;
        case PRE_ORDER:
            cout << root->data << " ";
            Print(root->left, type);
            Print(root->right, type);
            break;
        case POST_ORDER:
            Print(root->left, type);
            Print(root->right, type);
            cout << root->data << " ";
            break;
    }
}

void BST::deleteTree(Node* root) {
    if (root != NULL) {
        deleteTree(root->left);
        deleteTree(root->right);
        delete root;
    }
}

Node* BST::findMin(Node* root) {
    while (root && root->left != NULL) {
        root = root->left;
    }
    return root;
}
