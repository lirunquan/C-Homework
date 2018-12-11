#include <iostream>
#include "move.h"
using namespace std;
int main(){
    Move m1(1.1, 3.4);
    Move m2(2.5, 6.89);
    Move m3(-0.64, 9.65);
    m1.showmove();
    m1.add(m2);
    m1.showmove();
    m1.add(m2).add(m3).showmove();
    m1.reset();
    m1.showmove();
    return 0;
}
