/*#include <iostream>
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
*/

#include <iostream>
#include "dynArr2d.h"
using namespace std;

int main() {
    int rows, cols, input;

    // Input number of rows and columns
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    // Validate input
    if (rows <= 0 || cols <= 0) {
        cerr << "Rows and columns must be positive integers." << endl;
        return -1;  // Exit if invalid input
    }

    // Create a dynArr2d object with the specified rows and cols
    dynArr2d arr(rows, cols);

    // Input values for the array
    cout << "Enter the values for the array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> input;
            arr.setValue(i, j, input);  // Set value at (i, j)
        }
    }

    // Output the array values
    cout << "Output values:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr.getValue(i, j) << " ";  // Get value at (i, j)
        }
        cout << endl;
    }

    return 0;
}
