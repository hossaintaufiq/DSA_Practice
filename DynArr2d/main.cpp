#include <iostream>
#include<bits/stdc++.h>
#include "dynArr2d.h"

#include "dynArr2d.h"
using namespace std;

int main()
{
    int rows, cols,input;

    cin>>rows>>cols;

    dynArr2d arr(rows,cols);

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>input;
            arr.setValue(i,j,input);
        }
    }

    cout<<"Output value";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){

            cout<<arr.getValue(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}


