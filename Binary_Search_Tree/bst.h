#ifndef BST_H
#define BST_H

struct Node {
    int data;
    Node* left;
    Node* right;
};

enum TraversalType {
    IN_ORDER,
    PRE_ORDER,
    POST_ORDER
};

class BST {
private:
    Node* root;
    Node* Insert(Node* root, int data);
    bool Search(Node* root, int data);
    Node* Delete(Node* root, int data);
    void Print(Node* root, TraversalType type);
    Node* findMin(Node* root);
    void deleteTree(Node* root);

public:
    BST();
    ~BST();
    void Insert(int data);
    bool Search(int data);
    void Delete(int data);
    void MakeEmpty();
    void Print(TraversalType type);
};

#endif // BST_H
