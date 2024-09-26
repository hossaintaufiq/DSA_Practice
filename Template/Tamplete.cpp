#include "Tamplete.h"
using namespace std;
Tamplete::Tamplete()
{
    data=NULL;
    size=0;
}

Tamplete::Tamplete(int s){
    data=new int[s];
    s=size;
}

Tamplete::~Tamplete()
{
    delete[] data;
}


void Templete::setValue(int index, int value){
    data[index]=value;
}

int Templete::getValue(int index){
return data[index];
}
