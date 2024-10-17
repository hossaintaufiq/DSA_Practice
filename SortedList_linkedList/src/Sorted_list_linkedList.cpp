#include "Sorted_list_linkedList.h"

#include<bits/stdc++.h>

using namespace std ;

template<class T>
Sorted_list_linkedList<T>::Sorted_list_linkedList(){
    head = NULL;
     pointTo = NULL;
      size = 0;
}

template<class T>
int Sorted_list_linkedList<T>::Length(){
    return size;
}

template<class T>
void Sorted_list_linkedList<T>::Insert(T value){
    Node*temp=new Node;
    temp->data=value;
    temp->next=nullptr;

    if(head==nullptr){
        head=temp;
    }
    else{
        Node*i=head;
        Node*pre=nullptr;

        if(value<head->data){
            temp->next=head;
            head=temp;
        }
        else{
            while(i!=nullptr&&value >i->data){
                pre=i;
                i=i->next;
            }
            temp->next=i;
            pre->next=temp;
        }
    }
    size++;
}

template<class T>
void Sorted_list_linkedList<T>::Search(T value, bool &found){
    found=false;
    Node*i=head;
    while(i!=nullptr){
        if(value==i->data){
            found=true;
            break;
        }
        else{
            i=i->next;
        }
    }
}

template<class T>
void Sorted_list_linkedList<T>::Delete(T value){
    Node*i=head;
    Node*pre=nullptr;
    bool found=false;
    while(i!=nullptr){
        if(value==i->data){
            found=true;
            break;
        }
        else {
            pre=i;
            i=i->next;
        }
    }
    if(found){
        if(pre==nullptr){
            head==i->next;
        }
        else pre->next=i->next;

        delete i;
        size--;
    }

}

template<class T>
void Sorted_list_linkedList<T>::MakeEmpty(){
    Node* i = head;
     Node* nextNode;
      while (i != NULL) {
            nextNode = i->next; // Store the next node
      delete i; // Delete the current node
      i = nextNode; // Move to the next node
       }
       head = NULL;
       size = 0;
}
template<class T>
Sorted_list_linkedList<T>::~Sorted_list_linkedList{
    MakeEmpty();
}
template<class T>
void Sorted_list_linkedList<T>::GetNext(T &value){
    if (pointTo == NULL) {
pointTo = head;
 value = pointTo->data;
  }
   else {
            value = pointTo->data;
   }
   pointTo = pointTo->next;
}
template<class T>
void Sorted_list_linkedList<T>::Reset{
    pointTo=nullptr;
}
