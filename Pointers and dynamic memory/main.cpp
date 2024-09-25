#include<bits/stdc++.h>


using namespace std;


int addition(int *a, int *b){

    return *a+*b;

}

int subtruction(int *a, int *b){
    return *a-*b;
}

int main()
{
    int x=5;
    int *p=&x;
    int**q=&p;


    cout<<*p<<endl;
    cout<<p<<endl;
    cout<<q<<endl;

    cout<<*q<<endl;

    cout<<**q<<endl;


    return 0;
}
