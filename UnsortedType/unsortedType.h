#ifndef UNSORTEDTYPE_H
#define UNSORTEDTYPE_H


const int SIZE = 5;
template <class T>
class UnsortedType
{
private:
 T *data;
 int currentSize;
 int pointTo;
public:
 UnsortedType();
 ~UnsortedType();
 int Length();
 bool IsFull();
 void MakeEmpty();
 void Insert(T value);
 void Delete(T value);
 void Search(T value, bool &found);
 void GetNext(T &value);
 void Reset();
 void PrintList();
};

#endif // UNSORTEDTYPE_H
