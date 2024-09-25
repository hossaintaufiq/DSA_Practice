
#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;

    void print(){
    cout<<name<<endl;
    }
};

int main(){
   // int n;
    //cin>>n;

    int row;
    cin>>row;
    int col;
    cin>>col;

    // for 2d array
    int **array =new int *[row];

    for(int i=0;i<row; i++){
            array[i]=new  int [col];
    }

    //takinng inputs

        for(int i=0;i<row  ;i++){
            for(int j=0;j<col;j++){
                cin>>array[i][j];
            }

        }

        for(int i=0;i<row;i++){
            for(int j=0;j<col ;j++){
                cout<<array[i][j]<<" ";
            }
            cout<<endl;
        }

        for(int i=0;i<row; i++){
            delete[] array[i];
        }

        delete [] array;







    return 0;
}
