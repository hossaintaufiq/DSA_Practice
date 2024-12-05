#include <iostream>
#include <string>
#include <cctype>
#include "stacktype.h"

using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

string infixToPostfix(string infix) {
    StackType<char> stack;
    string postfix = "";

    for (char c : infix) {
        if (isspace(c)) continue;

        if (isdigit(c)) {
            postfix += c;
            postfix += ' ';
        } else if (c == '(') {
            stack.Push(c);
        } else if (c == ')') {
            while (!stack.IsEmpty() && stack.Top() != '(') {
                postfix += stack.Top();
                postfix += ' ';
                stack.Pop();
            }
            if (stack.IsEmpty()) return "Invalid expression";
            stack.Pop();
        } else if (isOperator(c)) {
            while (!stack.IsEmpty() && precedence(stack.Top()) >= precedence(c)) {
                postfix += stack.Top();
                postfix += ' ';
                stack.Pop();
            }
            stack.Push(c);
        } else {
            return "Invalid expression";
        }
    }

    while (!stack.IsEmpty()) {
        if (stack.Top() == '(') return "Invalid expression";
        postfix += stack.Top();
        postfix += ' ';
        stack.Pop();
    }

    return postfix;
}

int main() {
    string infix;
    cout << "Enter an infix expression: ";
    getline(cin, infix);

    string result = infixToPostfix(infix);
    cout << "Postfix expression: " << result << endl;

    return 0;
}
