#ifndef CD_H_
#define CD_H_
class Cd{
private:
    char performers[50];
    char label[20];
    int selections;
    double playtime;
public:
    Cd();
    Cd(char * s1, char * s2, int n, double x);
    Cd(const Cd & d);
    ~Cd();
    void Report() const;
    Cd & operator=(const Cd & d);
};
class Classic : public Cd{
private:
    char name[20];
public:
    Classic(char * s1, char * s2, char * s3, int n, double x);
    Classic(const Classic & d, char * c);
    Classic(const Classic & d);
    Classic();
    ~Classic();
    virtual void Report() const ;
    Classic & operator=(const Classic & d);
};
#endif
