#include "Complex.h"
#include <bits/stdc++.h>
using namespace std;

Complex::Complex()
{
    real =0;
    imaginary=0;
}

Complex::Complex(double r, double i)
{
    real=r;
    imaginary=i;
}
Complex Complex::operator+(Complex a){
    Complex t;
    t.real= real+a.real;
    t.imaginary= imaginary+a.imaginary;
    return t;

}/*

bool Complex::operator!=(Complex a){
    if(real == a.real && imaginary== a.imaginary){
        return true;
    }
    else return false ;
}
*/

void Complex::print(){
    cout<<"Real : "<<real<<endl;
    cout<<"Imaginary : "<<imaginary<<endl;
}

