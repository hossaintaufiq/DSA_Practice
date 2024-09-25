#include<bits/stdc++.h>
using namespace std;

int main(){
    int row,col;
    cout<<"Enter the number of rows: "<<endl;
    cin>>row;

    int **array= new int*[row];
    int *colCount=new int[row];

    for(int i=0;i<row;i++){
        cout<<"Enter the number of col for row no "<<i+1<<endl;
        cin>>col;

        colCount[i]=col;

        array[i] = new int[col];

        for(int j=0;j<col;j++){
            cin>>array[i][j];
        }

    }

    for(int i=0;i<row;i++){
        for(int j=0;j<colCount[i];j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<row;i++){
        delete[] array[i];
    }
    delete [] array;
    delete[] colCount;

    return 0;
}
