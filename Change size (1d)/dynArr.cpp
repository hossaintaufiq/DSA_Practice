#include "dynArr.h"
#include<iostream>
using namespace std;

dynArr::dynArr()
{
    data= NULL;
    s=0;
}

dynArr::dynArr(int s){
    data = new int[s];
    s=s;
}

dynArr::~dynArr()
{
    delete[] data;
}

void dynArr::setValue(int index, int value){
    data[index]=value;
}

int dynArr::getValue(int index){
    return data[index];
}

void dynArr::allocate(int s){
    int *newData = new int[s];

    for(int i=0;i<s && i ;i++){
        newData[i]=data[i];
    }
    delete[] data;
    data=newData;
    s=s;
}
