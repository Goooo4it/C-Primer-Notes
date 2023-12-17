// revised definition for the Stonewt class

#ifndef STONEWT1_H_
#define STONEWT1_H_

class Stonewt {
private:
    enum {Lbs_per_stn = 14}; // pounds per stone
    int stone; // whole stones
    double pds_left; // fractional pounds
    double pounds; // entire weight in pounds
public:
    Stonewt(double lbs); // constructor for double pounds
    Stonewt(int stn, double lbs); // constructor for stone, lbs
    Stonewt(); // default constructor
    ~Stonewt();
    void show_lbs() const; // show weight in pounds format
    void show_stn() const; // show weight in stone format

    // conversion functions
    // The conversion happens automatically, to turn this off, use the explicit keyword
    // C++98, the keyword explicity does not work with conversion functions
    // C++11 removes the restriction.
    operator int() const;
    operator double() const;
};

#endif