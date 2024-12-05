#include <iostream>
#include <string>
#include <stack>
#include "stacktype.h"

using namespace std;

// Helper function to check if parentheses are balanced
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

// Helper function to get precedence of operators
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

// Function to convert infix to postfix
string infixToPostfix(const string& infix) {
    StackType<char> stack;
    string postfix = "";

    for (char ch : infix) {
        if (isdigit(ch)) {
            postfix += ch;
        } else if (ch == '(') {
            stack.Push(ch);
        } else if (ch == ')') {
            while (!stack.IsEmpty() && stack.Top() != '(') {
                postfix += stack.Top();
                stack.Pop();
            }
            if (!stack.IsEmpty() && stack.Top() == '(') stack.Pop();
        } else {
            while (!stack.IsEmpty() && precedence(stack.Top()) >= precedence(ch)) {
                postfix += stack.Top();
                stack.Pop();
            }
            stack.Push(ch);
        }
    }

    while (!stack.IsEmpty()) {
        postfix += stack.Top();
        stack.Pop();
    }

    return postfix;
}

// Function to evaluate a postfix expression
double evaluatePostfix(const string& postfix) {
    StackType<double> stack;

    for (char ch : postfix) {
        if (isdigit(ch)) {
            stack.Push(ch - '0');
        } else {
            double b = stack.Top();
            stack.Pop();
            double a = stack.Top();
            stack.Pop();

            switch (ch) {
                case '+': stack.Push(a + b); break;
                case '-': stack.Push(a - b); break;
                case '*': stack.Push(a * b); break;
                case '/':
                    if (b == 0) throw runtime_error("Division by zero");
                    stack.Push(a / b);
                    break;
            }
        }
    }
    return stack.Top();
}

// Driver function
int main() {
    try {
        // Test stack with integers
        StackType<int> stack;
        cout << (stack.IsEmpty() ? "Stack is Empty" : "Stack is not Empty") << endl;

        stack.Push(5);
        stack.Push(7);
        stack.Push(4);
        stack.Push(2);
        cout << (stack.IsEmpty() ? "Stack is Empty" : "Stack is not Empty") << endl;

        stack.Diagnose();
        stack.Push(3);
        stack.Diagnose();
        cout << (stack.IsFull() ? "Stack is Full" : "Stack is not Full") << endl;

        stack.Pop();
        stack.Pop();
        cout << "Top item: " << stack.Top() << endl;

        // Check balanced parentheses
        string parenInputs[] = {"()", "(())()(()())()", "(())()((()", "(())))((()", "(())))))))"};
        for (const string& str : parenInputs) {
            cout << str << " -> " << (isBalanced(str) ? "Balanced" : "Not Balanced") << endl;
        }

        // Evaluate infix expressions
        string infixExpressions[] = {"10+3*5/(16-4)", "(5+3)*12/3", "3+4/(2-3)*/5", "7/5+(4-(2)*3"};
        for (const string& infix : infixExpressions) {
            try {
                string postfix = infixToPostfix(infix);
                cout << "Infix: " << infix << " -> Postfix: " << postfix << endl;
                cout << "Result: " << evaluatePostfix(postfix) << endl;
            } catch (...) {
                cout << "Infix: " << infix << " -> Invalid Expression" << endl;
            }
        }

    } catch (const EmptyStack&) {
        cout << "Error: Stack is empty!" << endl;
    } catch (const FullStack&) {
        cout << "Error: Stack is full!" << endl;
    } catch (const exception& ex) {
        cout << "Error: " << ex.what() << endl;
    }

    return 0;
}
