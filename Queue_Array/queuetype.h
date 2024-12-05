#ifndef QUEUETYPE_H
#define QUEUETYPE_H

const int SIZE = 100;

// Exception class thrown by Enqueue when the queue is full
class FullQueue {};

// Exception class thrown by Dequeue when the queue is empty
class EmptyQueue {};

template<class T>
class QueueType {
private:
    T* data;
    int front;
    int rear;
    int size;

public:
    QueueType();
    QueueType(int s);
    ~QueueType();
    void MakeEmpty();
    bool IsEmpty();
    bool IsFull();
    void Enqueue(T value);
    void Dequeue(T& value);
};

#endif // QUEUETYPE_H
