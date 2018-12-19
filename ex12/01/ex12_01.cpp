#include <iostream>
#include "cow.h"
#include <string>
#include <cstring>
using namespace std;
int main(){
    Cow a;
    a.showCow();
    Cow b("Bob", "sleep", 205.67);
    b.showCow();
    Cow c("Clummy", "run", 178.56);
    c.showCow();
    a = c;
    a.showCow();
    return 0;
}
