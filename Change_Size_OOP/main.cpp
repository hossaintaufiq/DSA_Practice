#include <iostream>
#include "dynArr.h"
#include "dynArr.cpp"
using namespace std;

int main()
{
    int size,value;
    size=3;
    dynArr arr();
    dynArr arr1(size);
    arr1.setValue(0,12);
    arr1.setValue(1,24);
    arr1.setValue(2,30);

    for(int i=0;i<size;i++){
        cout<<arr1.getValue(i)<<" ";
    }

    cout<<endl;

    size=4;
    arr1.allocate(size);
    arr1.setValue(3,40);

    return 0;
}
