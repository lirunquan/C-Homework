//vector.h Vector类，同程序清单11.13
#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>
namespace VECTOR
{
    class Vector{
    public:
        enum Mode {RECT, POL};
        //RECT指平面坐标， POL指极坐标
    private:
        double x;
        double y;
        double mag;
        double ang;
        Mode mode;
        void set_mag();
        void set_ang();
        void set_x();
        void set_y();
    public:
        Vector();
        Vector(double n1, double n2, Mode form = RECT);
        void reset(double n1, double n2, Mode form = RECT);
        ~Vector();
        //内联函数：
        double xval();
        double yval();
        double magval();
        double angval();
        void polar_mode();
        void rect_mode();
        //操作符重载：
        Vector operator+(const Vector & b) const;
        Vector operator-(const Vector & b) const;
        Vector operator-() const;
        Vector operator*(double n) const;
        //友元函数：
        friend Vector operator*(double n, const Vector &a);
        friend std::ostream & operator << (std::ostream & os, const Vector & v);
    };
}
#endif
