#include <iostream>
#include "complex0.h"


complex::complex(){
    real = imag = 0;
}

complex::complex(double x, double y) {
    real = x;
    imag = y;
}

complex complex::operator+(const complex & c) const {
    complex sum;
    sum.real = real + c.real;
    sum.imag = imag + c.imag;
    return sum;
}

complex complex::operator-(const complex & c) const {
    complex diff;
    diff.real = real - c.real;
    diff.imag = imag - c.imag;
    return diff;
}

complex complex::operator*(const complex & c) const {
    complex prod;
    prod.real = real * c.real - imag * c.imag;
    prod.imag = real * c.imag + imag * c.real;
    return prod;
}

complex complex::operator*(double x) const {
    complex prod;
    prod.real = real * x;
    prod.imag = imag * x;
    return prod;
}

complex complex::operator~() const {
    complex conj;
    conj.real = real;
    conj.imag = -imag;
    return conj;
}


std::ostream & operator<<(std::ostream & os, const complex & c) {
    os <<"(" << c.real << ", " << c.imag << "i)";
    return os;
}

std::istream & operator>>(std::istream & is, complex & c) {
    std::cout << "real: ";
    if (is >> c.real) {
        std::cout << "imaginary: ";
        is >> c.imag;
    }
    return is;
}

