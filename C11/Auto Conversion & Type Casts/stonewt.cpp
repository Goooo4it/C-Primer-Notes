// stonewt method

#include <iostream>
#include "stonewt.h"
using std::cout;

// construct Stonewt object from double value
// This constructor is a template for double-to-Stonewt conversion

// A C++ constructor that contains one argument defines a type conversion from the argument type to the class type

// The conversion happens automatically when a Stonewt object is initialized with a double value
// To turn off the automatic conversion, use the explicit keyword
Stonewt::Stonewt(double lbs){
    stone = int(lbs) / Lbs_per_stn; // integer division
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs){
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt(){ // default constructor, wt = 0
    stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt(){ // destructor
}

// show weight in stones
void Stonewt::show_stn() const{
    cout << stone << " stone, " << pds_left << " pounds\n";
}

// show weight in pounds
void Stonewt::show_lbs() const{
    cout << pounds << " pounds\n";
}