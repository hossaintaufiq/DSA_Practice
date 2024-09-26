#include <iostream>
#include<complex.h>
#include "Complex.h"

using namespace std;

int main()
{

    Complex obj1(2,4);
    Complex obj2(2,2);
    Complex sum;


    sum=obj1+obj2;

    sum.print();

    /*
        not equal operator
        if(obj1!=obj2){
        cout<<"complex numbers are not equal "<<endl;
        }
        else {
        cout<<"Complex numbers are equal "<<endl;
        }

    */

    return 0;
}
