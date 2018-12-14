#include <iostream>
#include <cstring>
#include "plorg.h"
using namespace std;
Plorg::Plorg(const char * ch, const int ci){
    strcpy(name, ch);
    CI = ci;
}
void Plorg::setCI(const int ci){
    CI = ci;
}
void Plorg::show(){
    cout << "Name: " << name << endl;
    cout << "CI: " << CI << endl;
}
