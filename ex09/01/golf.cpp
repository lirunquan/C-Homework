#include <iostream>
#include <cstring>
#include "golf.h"
using namespace std;
void setgolf(golf & g, const char * name, int hc){
    strcpy(g.fullname, name);
    g.handicap = hc;
}
int setgolf(golf & g){
    cout << "Input the fullname: " << endl;
    cin.getline(g.fullname, Len);
    if(strcmp(g.fullname, "") == 0){
        return 0;
    }
    else{
        cout << "Input the handicap: " << endl;
        cin >> g.handicap;
        cin.get();
        return 1;
    }
}
void handcap(golf & g, int hc){
    g.handicap = hc;
}
void showgolf(const golf & g){
    cout << "GOLF: " << endl;
    cout << "Fullname: " << g.fullname << endl;
    cout << "Handicap: " << g.handicap << endl;
}