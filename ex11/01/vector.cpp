//vector.cpp Vector类的实现，同程序清单11.14
#include <math>
#include "vector.h"
using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;
namespace Vector {
    const double Rad_to_deg = 45.0/atan(1.0);
    //57.2958
    //私有函数
    void Vector::set_mag(){
        mag = sqrt(x*x + y*y);
    }
    void Vector::set_ang(){
        if(x==0 && y==0){
            ang = 0.0;
        }
        else{
            ang = atan2(y, x);
        }
    }
    void Vector::set_x(){
        x = mag * cos(ang);
    }
    void Vector::set_y(){
        y = mag * sin(ang);
    }
    //公有函数
    
}
