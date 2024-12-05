#include <iostream>
#include <string>
#include "stacktype.h"

using namespace std;

// Function to check if a string of parentheses is balanced
bool isBalanced(const string& str) {
    StackType<char> stack;
    for (char ch : str) {
        if (ch == '(') {
            stack.Push(ch);
        } else if (ch == ')') {
            if (stack.IsEmpty()) {
                return false;
            }
            stack.Pop();
        }
    }
    return stack.IsEmpty();
}

int main() {
    try {
        // Create a stack of integers
        StackType<int> stack;

        // Check if the stack is empty
        cout << (stack.IsEmpty() ? "Stack is Empty" : "Stack is not Empty") << endl;

        // Push four items
        stack.Push(5);
        stack.Push(7);
        stack.Push(4);
        stack.Push(2);

        // Check if the stack is empty
        cout << (stack.IsEmpty() ? "Stack is Empty" : "Stack is not Empty") << endl;

        // Check if the stack is full
        cout << (stack.IsFull() ? "Stack is full" : "Stack is not full") << endl;

        // Print the values in the stack
        cout << "Stack values: ";
        for (int i = stack.Top(); i >= 0; i--) {
            cout << stack.Top() << " ";
            stack.Pop();
        }
        cout << endl;

        // Push another item
        stack.Push(3);

        // Print the values in the stack
        cout << "Stack values after pushing another item: ";
        for (int i = 0; i <= stack.Top(); i++) {
            cout << stack.Top() << " ";
            stack.Pop();
        }
        cout << endl;

    }
             // Push another item
        stack.Push(3);

        // Print the values in the stack
        cout << "Stack values after pushing another item: ";
        for (int i = 0; i <= stack.Top(); i++) {
            cout << stack.Top() << " ";
            stack.Pop();
        }
        cout << endl;

        // Check if the stack is full
        cout << (stack.IsFull() ? "Stack is full" : "Stack is not full") << endl;

        // Pop two items
        stack.Pop();
        stack.Pop();

        // Print the top item
        cout << "Top item: " << stack.Top() << endl;

        // Balanced parentheses check
        cout << "\nChecking for balanced parentheses:\n";
        string testStrings[] = {
            "()",
            "(())()(()())()",
            "(())()((()",
            "(())))((()",
            "(())))))))"
        };

        for (const string& str : testStrings) {
            cout << str << " -> " << (isBalanced(str) ? "Balanced" : "Not Balanced") << endl;
        }

    } catch (const FullStack&) {
        cout << "Error: Stack is full!" << endl;
    } catch (const EmptyStack&) {
        cout << "Error: Stack is empty!" << endl;
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}

