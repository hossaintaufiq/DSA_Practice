#include <iostream>
#include "Tamplete.h"
#include "Tamplete.cpp"

using namespace std;

int main()
{
    int n, value;
    n=3;
    Tamplete<int> arr1(n);

    for(int i=0;i<n;i++){
            cin>>value;
        arr1.setValue(i,value);
    }

    cout<<"outputing the array elements: "<<endl;

    for(int i=0;i<n;i++){
        cout<<arr1.getValue(i)<<" ";
    }

    return 0;
}
