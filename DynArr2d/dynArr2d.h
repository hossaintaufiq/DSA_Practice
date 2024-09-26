#ifndef DYNARR2D_H
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
    int allocate(int newRows, int newCols);

};

#endif // DYNARR2D_H
