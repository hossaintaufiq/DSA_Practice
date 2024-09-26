/*#ifndef DYNARR2D_H
#define DYNARR2D_H


class dynArr2d
{
  private:
      int **data;
      int rows,cols;

  public:
    dynArr2d();
    dynArr2d(int rows,int cols);
    ~dynArr2d();
    void setValue(int i, int j, int value);
    int getValue(int i,int j);
    void allocate(int newRows, int newCols);

};

#endif // DYNARR2D_H
*/

#ifndef DYNARR2D_H
#define DYNARR2D_H

class dynArr2d {
private:
    int **data;  // Pointer to dynamically allocated 2D array
    int rows, cols;  // Number of rows and columns

public:
    dynArr2d();  // Default constructor
    dynArr2d(int rows, int cols);  // Parameterized constructor
    ~dynArr2d();  // Destructor

    void setValue(int i, int j, int value);  // Set value at (i, j)
    int getValue(int i, int j);  // Get value at (i, j)
    void allocate(int newRows, int newCols);  // Reallocate memory for a new size
};

#endif // DYNARR2D_H
