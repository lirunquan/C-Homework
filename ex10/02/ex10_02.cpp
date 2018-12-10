#include <iostream>
#include <cstring>
#include <string>
#include "person.h"
using namespace std;
int main(){
    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");
    one.show();
    cout << endl;
    one.FormalShow();
    cout << endl;
    two.show();
    cout<<endl;
    two.FormalShow();
    cout << endl;
    three.show();
    cout << endl;
    three.FormalShow();
    cout << endl;
}