#include <iostream>
#include <string>
#include "port.h"
using namespace std;
int main(){
    Port p1("gallo", "tawny", 20);
    cout << "p1: " << p1 << endl << endl;
    VintagePort vp("gallo", 24, "Old Velvet", 16);
    cout << "vp: " << vp << endl << endl;
    VintagePort vp1(vp);
    
    cout << "vp1: " << vp1 << endl << endl;
    VintagePort vp2;
    vp2 = vp;
    cout << "vp2: " << vp2 << endl << endl;
    Port * p_port;
    p_port = &p1;
    p_port->Show();
    cout << endl;
    p_port = &vp;
    p_port->Show();
    cout << endl;
    return 0;
}
