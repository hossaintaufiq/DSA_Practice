#include "dynArr2d.h"
#include<bits/stdc++.h>

using namespace std;

dynArr2d::dynArr2d()
{
    data=NULL;
    rows=0;
    cols=0;
}

dynArr2d::dynArr2d(int rows,int cols)
{
    data = new int*[rows];
    for(int i=0; i<rows; i++)
    {
        data[i]=new int[cols];
    }
}

void dynArr2d::setValue(int i, int j, int value)
{
    data[i][j]=value;
}

int dynArr2d::getValue(int i,int j)
{
    return data[i][j];
}

void dynArr2d::allocate(int newRows, int newCols)
{
    int **newData= new int *[newRows];

    for(int i=0; i<newRows; i++)
    {
        newData[i]= new int [newCols];
    }

    for(int i=0; i<rows&&i<newRows; i++)
    {
        for(int j=0; j<cols&&j<newCols; j++)
        {
            newData[i][j]=data[i][j];
        }
    }

    for(int i=0; i<rows; i++)
    {
        delete[] data[i];
    }
    delete [] data;

    data=newData;
    rows=newRows;
    cols=newCols;
}

dynArr2d::~dynArr2d()

{
    for(int i=0; i<rows; i++)
    {
        delete[] data[i];
    }
    delete [] data;
}




