#ifndef PORT_H
#define PORT_H
#include<iostream>
using namespace std;
class Port
{
private:
    char * brand;
    char style[20];            //ie.,tawny,ruby,vintage
    int bottles;
public:
    Port(const char * br = "none", const char * st = "none", int b = 0);
    Port(const Port & p);
    virtual ~Port() { delete [] brand; }
    Port & operator=(const Port & p);
    Port & operator+=(int b);                // add b to bottles
    Port & operator-=(int b);
    virtual void Show() const;
    friend ostream & operator<<(ostream & os, const Port & p);
protected:
    int BottleCount()const { return bottles; }
    
};
class VintagePort :public Port
{
private:
    char * nickname;
    int year;
public:
    VintagePort();
    VintagePort(const char * br, int b, const char * nn, int y);
    VintagePort(const VintagePort & vp);
    ~VintagePort() { delete [] nickname; }
    VintagePort & operator=(const VintagePort & vp);
    virtual void Show()const;
    friend ostream & operator<<(ostream & os, const VintagePort & pt);
};
#endif // !PORT_H
