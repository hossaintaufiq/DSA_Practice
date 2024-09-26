#include "dynarr.h"
#include <iostream>
using namespace std;

dynArr::dynArr(){
    int data= NULL;
    int size =0;
}

dynArr::dynArr(int s){
    data = new int[s];
    size = s;
}

dynArr::~dynArr(){
    delete[] data;
}


void dynArr::setValue(int index, int value){
    data[index]=value;
}

int dynArr::getValue(int index){
    return data[index];
}


