#include "bst.h"
#include <iostream>
using namespace std;

int main() {
    BST tree;

    // Step 1: Insert seven items
    int items[] = {50, 30, 20, 40, 70, 60, 80};
    for (int item : items) {
        tree.Insert(item);
    }

    // Step 2: Print the tree in different orders
    tree.Print(IN_ORDER);    // Expected: 20 30 40 50 60 70 80
    tree.Print(PRE_ORDER);   // Expected: 50 30 20 40 70 60 80
    tree.Print(POST_ORDER);  // Expected: 20 40 30 60 80 70 50

    // Step 3: Search for 20 and 15
    cout << (tree.Search(20) ? "Found" : "Not Found") << endl; // Expected: Found
    cout << (tree.Search(15) ? "Found" : "Not Found") << endl; // Expected: Not Found

    // Step 4: Delete 20 and reprint
    tree.Delete(20);
    tree.Print(IN_ORDER);    // Expected: 30 40 50 60 70 80
    tree.Print(PRE_ORDER);   // Expected: 50 30 40 70 60 80
    tree.Print(POST_ORDER);  // Expected: 40 30 60 80 70 50

    return 0;
}
