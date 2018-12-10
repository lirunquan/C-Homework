#include <iostream>
#include <cstring>
#include "person.h"
using namespace std;
Person::Person(const string & ln, const char * fn){
    lname = ln;
    strcpy(fname, fn);
}
void Person::show() const{
    cout << "Full name: " << endl;
    cout << fname << " " << lname << endl;
}
void Person::FormalShow() const{
    cout << "Formal name: " << endl;
    cout << lname << "," << fname << endl;
}