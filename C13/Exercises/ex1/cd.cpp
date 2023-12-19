#include <iostream>
#include <cstring>
#include "cd.h"


using std::cout;
using std::endl;
using std::string;

// Cd methods
Cd::Cd(const char * s1, const char * s2, int n, double x) {
    std::strcpy(performers, s1);
    std::strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd & d) {
    std::strcpy(performers, d.performers);
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd() {
    std::strcpy(performers, "none");
    std::strcpy(label, "none");
    selections = 0;
    playtime = 0.0;
}

Cd::~Cd() {
}

void Cd::Report() const {
    cout << "Performers: " << performers << endl;
    cout << "Label: " << label << endl;
    cout << "Selections: " << selections << endl;
    cout << "Playtime: " << playtime << endl;
}

Cd & Cd::operator=(const Cd & d) {
    if (this == &d)
        return *this;
    std::strcpy(performers, d.performers);
    std::strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}

// Classic methods

Classic::Classic(const char * s1, const char * s2, const char * s3, int n, double x) : Cd(s1, s2, n, x) {
    mainSong = new char[std::strlen(s3) + 1];
    std::strcpy(mainSong, s3);
}

Classic::Classic(const Classic & c) : Cd(c) {
    mainSong = new char[std::strlen(c.mainSong) + 1];
    std::strcpy(mainSong, c.mainSong);
}

Classic::Classic() : Cd() {
    mainSong = new char[std::strlen("none") + 1];
    std::strcpy(mainSong, "none");
}

Classic::~Classic() {
    delete [] mainSong;
}

void Classic::Report() const {
    Cd::Report();
    cout << "Main song: " << mainSong << endl;
}

Classic & Classic::operator=(const Classic & c) {
    if (this == &c)
        return *this;
    Cd::operator=(c);
    delete [] mainSong;
    mainSong = new char[std::strlen(c.mainSong) + 1];
    std::strcpy(mainSong, c.mainSong);
    return *this;
}



