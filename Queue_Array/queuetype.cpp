#include "queuetype.h"
#include <iostream>
using namespace std;

template<class T>
QueueType<T>::QueueType() {
    size = SIZE;
    data = new T[size];
    front = rear = 0;
}

template<class T>
QueueType<T>::QueueType(int s) {
    size = s + 1;
    data = new T[size];
    front = rear = 0;
}

template<class T>
QueueType<T>::~QueueType() {
    delete[] data;
}

template<class T>
void QueueType<T>::MakeEmpty() {
    front = rear = 0;
}

template<class T>
bool QueueType<T>::IsEmpty() {
    return (front == rear);
}

template<class T>
bool QueueType<T>::IsFull() {
    return ((rear + 1) % size == front); // Full if next position of rear equals front
}

template<class T>
void QueueType<T>::Enqueue(T value) {
    if (IsFull()) {
        throw FullQueue();
    } else {
        data[rear] = value;       // Store the new value at the rear
        rear = (rear + 1) % size; // Move rear to next position (circularly)
    }
}

template<class T>
void QueueType<T>::Dequeue(T& value) {
    if (IsEmpty()) {
        throw EmptyQueue();
    } else {
        value = data[front];        // Retrieve the value from the front
        front = (front + 1) % size; // Move front to next position (circularly)
    }
}
