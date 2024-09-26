#ifndef COMPLEX_H
#define COMPLEX_H


class Complex
{
public:
    Complex();
    Complex(double r, double i);
    Complex operator+(Complex);
    void print();

private:
    double real, imaginary;
};

#endif // COMPLEX_H
