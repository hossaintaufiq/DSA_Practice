#include "pqtype.h"

template<class T>
PQType<T>::PQType(int max) {
    this->max = max;
    data.elements = new T[max];
    length = 0;
}

template<class T>
PQType<T>::~PQType() {
    delete[] data.elements;
}

template<class T>
void PQType<T>::MakeEmpty() {
    length = 0;
}

template<class T>
bool PQType<T>::IsEmpty() {
    return length == 0;
}

template<class T>
bool PQType<T>::IsFull() {
    return length == max;
}

template<class T>
void PQType<T>::Enqueue(T newItem) {
    if (length == max)
        throw FullPQ();
    else {
        length++;
        data.elements[length - 1] = newItem;
        data.ReheapUp(0, length - 1);
    }
}

template<class T>
void PQType<T>::Dequeue(T& item) {
    if (length == 0)
        throw EmptyPQ();
    else {
        item = data.elements[0];
        data.elements[0] = data.elements[length - 1];
        length--;
        data.ReheapDown(0, length - 1);
    }
}
