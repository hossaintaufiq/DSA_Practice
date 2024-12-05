#include "stacktype.h"

template <class T>
StackType<T>::StackType() {
    head = nullptr;
}

template <class T>
StackType<T>::~StackType() {
    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
}

template <class T>
bool StackType<T>::IsEmpty() {
    return head == nullptr;
}

template <class T>
bool StackType<T>::IsFull() {
    try {
        Node* temp = new Node;
        delete temp;
        return false;
    } catch (...) {
        return true;
    }
}

template <class T>
void StackType<T>::Push(T value) {
    if (IsFull()) throw FullStack();
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

template <class T>
void StackType<T>::Pop() {
    if (IsEmpty()) throw EmptyStack();
    Node* temp = head;
    head = head->next;
    delete temp;
}

template <class T>
T StackType<T>::Top() {
    if (IsEmpty()) throw EmptyStack();
    return head->data;
}

template class StackType<char>;
