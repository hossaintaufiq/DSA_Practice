#ifndef DYNARR_H
#define DYNARR_H


class dynArr
{
private:
    int *data;
    int s;
public:
    dynArr();
    dynArr(int s);
    ~dynArr();
    void setValue(int index,int value);
    int getValue(int index);
    void allocate(int s);


};

#endif // DYNARR_H
