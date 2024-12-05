#ifndef PQTYPE_H
#define PQTYPE_H

#include "heaptype.h"
#include "heaptype.cpp"

class FullPQ {};
class EmptyPQ {};

template<class T>
class PQType {
private:
    int length;
    HeapType<T> data;
    int max;
public:
    PQType(int);
    ~PQType();
    void MakeEmpty();
    bool IsEmpty();
    bool IsFull();
    void Enqueue(T);
    void Dequeue(T&);
};

#endif // PQTYPE_H


