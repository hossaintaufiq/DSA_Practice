#ifndef SORTEDTYPE_H
#define SORTEDTYPE_H

template <class T>
class SortedType
{
private:
    struct Node
    {
        T data;
        Node* next;
    };
    Node* head;
    Node* pointTo;
    int size;
public:
    SortedType();
    ~SortedType();
    int Length();
    void Insert(T value);
    void Search(T value, bool &found);
    void Delete(T value);
    void MakeEmpty();
    void GetNext(T &value);
    void Reset();
};

#endif // SORTEDTYPE_H
