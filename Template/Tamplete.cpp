#include "Tamplete.h"
using namespace std;

template<class T>
Tamplete<T>::Tamplete()
{
    data=nullptr;
    size=0;
}
template <class T>
Tamplete<T>::Tamplete(int s){
    data=new T[s];
    size=s;
}

template <class T>
Tamplete<T>::~Tamplete()
{
    delete[] data;
}

template <class T>
void Tamplete<T>::setValue(int index,T value){

    data[index]=value;
}

template <class T>
T Tamplete<T>::getValue(int index){
return data[index];
}
