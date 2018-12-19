#ifndef STRING2_H_
#define STRING2_H_
#include <iostream>
using std::istream;
using std::ostream;
class String{
private:
    char * str;
    int len;
    static int num_strings;
    //static const int CINLIM = 80;
public:
    static const int CINLIM = 80;
    String(const char * s);
    String();
    String(const String & s);
    ~String();
    int length() const {return len;}
    void stringlow();
    void stringup();
    int has(char c);
    friend String operator+(const String & s1, const String & s2);
    
    String & operator=(const String & s);
    String & operator=(const char * s);
    char & operator[](int i);
    const char & operator[](int i) const;
    
    friend bool operator<(const String & s1, const String & s2);
    friend bool operator>(const String & s1, const String & s2);
    friend bool operator==(const String & s1, const String & s2);
    friend ostream & operator<<(ostream & os, const String & s);
    friend istream & operator>>(istream & is, const String & s);
    static int HowMany();
};
#endif

