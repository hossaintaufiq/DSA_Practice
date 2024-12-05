#include "heaptype.h"

template<class T>
void Swap(T& one, T& two) {
    T temp;
    temp = one;
    one = two;
    two = temp;
}

template<class T>
void HeapType<T>::ReheapDown(int root, int bottom) {
    int maxChild;
    int rightChild;
    int leftChild;

    leftChild = root * 2 + 1;
    rightChild = root * 2 + 2;

    if (leftChild <= bottom) {
        if (leftChild == bottom)
            maxChild = leftChild;
        else {
            if (elements[leftChild] <= elements[rightChild])
                maxChild = rightChild;
            else
                maxChild = leftChild;
        }
        if (elements[root] < elements[maxChild]) {
            Swap(elements[root], elements[maxChild]);
            ReheapDown(maxChild, bottom);
        }
    }
}

template<class T>
void HeapType<T>::ReheapUp(int root, int bottom) {
    int parent;
    if (bottom > root) {
        parent = (bottom - 1) / 2;
        if (elements[parent] < elements[bottom]) {
            Swap(elements[parent], elements[bottom]);
            ReheapUp(root, parent);
        }
    }
}
