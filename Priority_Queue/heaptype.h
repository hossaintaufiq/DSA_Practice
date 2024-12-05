#ifndef HEAPTYPE_H
#define HEAPTYPE_H

template<class T>
struct HeapType {
    void ReheapDown(int root, int bottom);
    void ReheapUp(int root, int bottom);
    T* elements;
};

#endif // HEAPTYPE_H
