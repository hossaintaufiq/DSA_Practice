
#include<bits/stdc++.h>
using namespace std;

int main(){
    int row,cols;
    cout<<"Enter number of rows";
    cin>>row;
    cout<<"Enter number of col";
    cin>>cols;

    char **ch= new char *[row];

    for(int i=0;i< row;i++){
        ch[i]=new char[cols];
    }

    //taking input
    cout<<"Enter the inputs"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            cin>>ch[i][j];
        }
    }
    cout<<endl;
    cout<<"The outputs are bellow"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            cout<<ch[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<row;i++){
        delete[] ch[i];
    }
    delete[] ch;



    return 0;
    }
