// base class

class Cd {
private:
    char performers[50];
    char label[20];
    int selections; // number of selections
    double playtime; // playing time in minutes
public:     
    Cd(const char * s1, const char * s2, int n, double x);
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
    Classic(const char * s1, const char * s2, const char * s3, int n, double x);
    Classic(const Classic & c);
    Classic();
    virtual ~Classic();
    virtual void Report() const;
    virtual Classic & operator=(const Classic & c);
};
