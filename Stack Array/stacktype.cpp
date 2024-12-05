#include <iostream>
#include "stacktype.h"

using namespace std;

template<class T>
StackType<T>::StackType() {
    data = new T[SIZE];
    top = -1;
}

template<class T>
StackType<T>::~StackType() {
    delete[] data;
}

template<class T>
bool StackType<T>::IsEmpty() {
    return (top == -1);
}

template<class T>
bool StackType<T>::IsFull() {
    return (top == SIZE - 1);
}

template<class T>
void StackType<T>::Push(T value) {
    try {
        if (IsFull()) {
            throw FullStack();
        } else {
            top++;
            data[top] = value;
        }
    } catch (FullStack e) {
        cout << "Error: Stack is full" << endl;
    }
}

template<class T>
void StackType<T>::Pop() {
    try {
        if (IsEmpty()) {
            throw EmptyStack();
        } else {
            top--;
        }
    } catch (EmptyStack e) {
        cout << "Error: Stack is empty" << endl;
    }
}

template<class T>
T StackType<T>::Top() {
    try {
        if (IsEmpty()) {
            throw EmptyStack();
        } else {
            return data[top];
        }
    } catch (EmptyStack e) {
        cout << "Error: Stack is empty" << endl;
        return T(); // Return default-constructed object to avoid compiler warnings
    }
}
