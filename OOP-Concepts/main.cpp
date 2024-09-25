#include <iostream>
#include "Box.h"
//#include "Box.cpp"
using namespace std;

int main()
{
    Box box1(4,5,6);
    double result = box1.volume();

    cout<<result;
    return 0;
}
