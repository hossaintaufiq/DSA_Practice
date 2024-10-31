#include "SortedType.h"
#include<iostream>

using namespace std;
template <class T>
SortedType<T>::SortedType()
{
    head = NULL;
    pointTo = NULL;
    size = 0;
}
template <class T>
int SortedType<T>::Length()
{
    return size;
}
template <class T>
void SortedType<T>::Insert(T value)
{
    Node* temp = new Node; // Create a new node
    temp->data = value; // Set the data of the new node
    temp->next = NULL; // Initialize the next pointer
// Case 1: Empty list
    if (head == NULL)
    {
        head = temp; // Insert the new node as the head
    }
    else
    {
// Case 2: Insert at the beginning
        if (value < head->data)
        {
            temp->next = head; // New node points to the old head
            head = temp; // New node becomes the new head
        }
        else
        {
// Case 3: Traverse the list to find the correct position
            Node* i = head;
            Node* prev = NULL;

            while (i != NULL && value > i->data)
            {
                prev = i; // Move prev to 'i'
                i = i->next; // Move to the next node
            }
// Insert between prev and 'i'
            temp->next = i; // New node points to 'i'
            prev->next = temp; // Previous node points to new node
        }
    }
    size++; // Increment the size of the list
}
template <class T>
void SortedType<T>::Search(T value, bool &found)
{
    found = false;
    Node* i = head;
    while(i != NULL)
    {
        if (value == i->data)
        {
            found = true;
            break;
        }
        else
        {
            i = i->next;
        }
    }
}
template <class T>
void SortedType<T>::Delete(T value)
{
    Node* i = head;
    Node* prev = NULL;
    bool found = false;
    while(i != NULL)
    {
        if (value == i->data)
        {
            found = true;
            break;
        }
        else
        {
            prev = i;
            i = i->next;
        }
    }
    if (found)
    {
        if (prev == NULL) // first node / no previous nodes
            head = i->next;
        else
            prev->next = i->next;
        delete i;
        size--;
    }
}
template <class T>
void SortedType<T>::MakeEmpty()
{
    Node* i = head;
    Node* nextNode;
    while (i != NULL)
    {
        nextNode = i->next; // Store the next node
        delete i; // Delete the current node
        i = nextNode; // Move to the next node
    }
    head = NULL;
    size = 0;
}
template <class T>
SortedType<T>::~SortedType()
{
    MakeEmpty();
}
template <class T>
void SortedType<T>::GetNext(T &value)
{
    if (pointTo == NULL)
    {
        pointTo = head;
        value = pointTo->data;
    }
    else
    {
        value = pointTo->data;
    }
    pointTo = pointTo->next;
}
template <class T>
void SortedType<T>::Reset()
{
    pointTo = NULL;
}
