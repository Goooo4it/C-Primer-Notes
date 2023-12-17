#include <iostream>
#ifndef STRNGBAD_H_
#define STRNGBAD_H_

class StringBad {
private:
    char * str;
    int len;
    // A program only create one copy of static class variable, regardless if the number of objects created.
    // The static class variable is shared by all objects of the class.
    static int num_strings;
public:
    StringBad();
    StringBad(const char * s);
    ~StringBad();
    StringBad(const StringBad & st);
    StringBad &operator=(const StringBad & st);
    // friend function
    friend std::ostream & operator<<(std::ostream & os, const StringBad & st);
};

#endif