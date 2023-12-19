// using dynamic memory allocation
// base class

class Cd {
private:
    char * performers;
    char * label;
    int selections; // number of selections
    double playtime; // playing time in minutes
public:
    Cd(const char * s1, const char * s2, const int, const double);
    Cd(const Cd & d);
    Cd();
    virtual ~Cd();
    virtual void Report() const; // reports all CD data
    virtual Cd & operator=(const Cd & d);
};

class Classic : public Cd {
private:
    char * mainSong;
public:
    Classic(const char * s1, const char * s2, const char * s3, const int, const double);
    Classic(const Classic & c);
    Classic();
    virtual ~Classic();
    virtual void Report() const;
    virtual Classic & operator=(const Classic & c);
};