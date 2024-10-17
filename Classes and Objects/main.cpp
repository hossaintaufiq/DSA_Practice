#include <iostream>
#include "dynArr.h"

using namespace std;

int main()
{
    dynArr Array1(0);
    dynArr Array2(5);

    int value;
    for(int i=0;i<5;i++){

    cin>>value;
        Array2.setValue(i,value);
    }

    for(int i=0;i<5;i++){
       cout<< Array2.getValue(i)<<" ";
    }

    return 0;
}
