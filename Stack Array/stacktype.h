#ifndef STACKTYPE_H
#define STACKTYPE_H

const int SIZE = 5;

// Exception class thrown by Push when the stack is full
class FullStack {};

// Exception class thrown by Pop and Top when the stack is empty
class EmptyStack {};

template<class T>
class StackType {
private:
    T* data;
    int top;

public:
    StackType();
    ~StackType();
    bool IsFull();
    bool IsEmpty();
    void Push(T value);
    void Pop();
    T Top();
};

#endif // STACKTYPE_H
