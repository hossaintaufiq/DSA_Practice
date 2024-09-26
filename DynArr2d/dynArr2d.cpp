#include "dynArr2d.h"
#include<bits/stdc++.h>

using namespace std;

/*dynArr2d::dynArr2d()
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
}*/




// Default constructor, initializes to nullptr and size 0
dynArr2d::dynArr2d() {
    data = nullptr;
    rows = 0;
    cols = 0;
}

// Parameterized constructor, allocates memory for a 2D array
dynArr2d::dynArr2d(int rows, int cols) {
    this->rows = rows;
    this->cols = cols;
    data = new int*[rows];
    for (int i = 0; i < rows; i++) {
        data[i] = new int[cols];
    }
}

// Destructor, frees the dynamically allocated memory
dynArr2d::~dynArr2d() {
    if (data != nullptr) {
        for (int i = 0; i < rows; i++) {
            delete[] data[i];
        }
        delete[] data;
    }
}

// Set value at index (i, j)
void dynArr2d::setValue(int i, int j, int value) {
    if (i >= 0 && i < rows && j >= 0 && j < cols) {
        data[i][j] = value;
    } else {
        cerr << "Error: Index (" << i << "," << j << ") out of bounds.\n";
    }
}

// Get value at index (i, j)
int dynArr2d::getValue(int i, int j) {
    if (i >= 0 && i < rows && j >= 0 && j < cols) {
        return data[i][j];
    } else {
        cerr << "Error: Index (" << i << "," << j << ") out of bounds.\n";
        return -1;  // Return an error value if out of bounds
    }
}

// Allocate new memory for a resized array, copying old data
void dynArr2d::allocate(int newRows, int newCols) {
    int **newData = new int*[newRows];
    for (int i = 0; i < newRows; i++) {
        newData[i] = new int[newCols];
    }

    // Copy old data to the new array (if available)
    for (int i = 0; i < rows && i < newRows; i++) {
        for (int j = 0; j < cols && j < newCols; j++) {
            newData[i][j] = data[i][j];
        }
    }

    // Free old memory
    if (data != nullptr) {
        for (int i = 0; i < rows; i++) {
            delete[] data[i];
        }
        delete[] data;
    }

    // Update pointers and sizes
    data = newData;
    rows = newRows;
    cols = newCols;
}
