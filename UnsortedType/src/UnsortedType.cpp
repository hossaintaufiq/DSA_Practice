#include "UnsortedType.h"
#include<iostream>

using namespace std;

template <class T>
UnsortedType<T>::UnsortedType()
{
    data = new T[SIZE];
    currentSize = 0;
    pointTo = -1;
}
template <class T>
UnsortedType<T>::~UnsortedType()
{
    delete[] data;
}
template <class T>
int UnsortedType<T>::Length()
{
    return currentSize;
}
template <class T>
bool UnsortedType<T>::IsFull()
{
    return (SIZE == currentSize);
}
template <class T>
void UnsortedType<T>::MakeEmpty()
{
    currentSize = 0;
}
template <class T>
void UnsortedType<T>::Insert(T value)
{
    data[currentSize] = value;
    currentSize++;
}
template <class T>
void UnsortedType<T>::Delete(T value)
{
    int i = 0;
    while (value != data[i])
    {
        i++;
    }
    data[i] = data[currentSize - 1];
    currentSize--;
}
template <class T>
void UnsortedType<T>::Search(T value, bool &found)
{
    found = false;
    int i = 0;
    while (i < currentSize)
    {
        if (data[i] == value)
        {
            found = true;
            break;
        }
        else
        {
            i++;
        }
    }
}
template <class T>
void UnsortedType<T>::GetNext(T &value)
{
    pointTo++;
    value = data[pointTo];
}
template <class T>
void UnsortedType<T>::Reset()
{
    pointTo = -1;
}

template <class T>
void UnsortedType<T>::printList(){
    for(int i=0;i<currentSize;i++){
       cout<<data[i]<<" ";
    }
}
