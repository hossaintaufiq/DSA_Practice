#ifndef TAMPLETE_H
#define TAMPLETE_H

template <class T>
class Tamplete
{
private:
    T *data;
    int size;
public:
    Tamplete();
    Tamplete(int s);
    ~Tamplete();

    void setValue(int index, T value);
    T getValue(int index);

};

#endif // TAMPLETE_H
