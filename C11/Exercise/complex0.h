#include <iostream>

class complex {
    private:
            double real;
            double imag;
    public:
        complex();
        complex(double x, double y);
        complex operator+(const complex & c) const;
        complex operator-(const complex & c) const;
        complex operator*(const complex & c) const;
        complex operator*(double x) const;
        complex operator~() const;
        friend complex operator*(double x, const complex & c) { return c * x; }
        friend std::ostream & operator<<(std::ostream & os, const complex & c);
        friend std::istream & operator>>(std::istream & is, complex & c);
};