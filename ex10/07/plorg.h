#ifndef PLORG_H_
#define PLORG_H_
class Plorg{
private:
    char name[19];
    int CI;
public:
    Plorg(const char * ch = "Plorga", const int ci = 50);
    void setCI(const int ci);
    void show();
};
#endif
