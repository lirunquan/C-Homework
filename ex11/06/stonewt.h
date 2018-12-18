#ifndef STONEWT_H_
#define STONEWT_H_
enum Mode { stoneps, intps, floatps};

class Stonewt{
private:
    enum { Lbs_per_stn = 14};
    int stone;
    double pds_left;
    double pounds;
    int mode;
public:
    void setmode(Mode m);
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt();
    ~Stonewt();
    
    friend Stonewt operator+(const Stonewt & a, const Stonewt & b);
    friend Stonewt operator-(const Stonewt & a, const Stonewt & b);
    friend Stonewt operator*(const Stonewt & a, double b);
    friend Stonewt operator*(double a, const Stonewt & b);
    
    friend bool operator>(const Stonewt & a, const Stonewt & b);
    friend bool operator<(const Stonewt & a, const Stonewt & b);
    friend bool operator>=(const Stonewt & a, const Stonewt & b);
    friend bool operator<=(const Stonewt & a, const Stonewt & b);
    friend bool operator==(const Stonewt & a, const Stonewt & b);
    friend bool operator!=(const Stonewt & a, const Stonewt & b);
    
    friend std::ostream & operator<<(std::ostream & os, const Stonewt & s);
};
#endif
