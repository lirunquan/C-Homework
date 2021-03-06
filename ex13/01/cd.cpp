#include "cd.h"
#include <iostream>
#include <cstring>
using namespace std;
//class Cd
Cd::Cd(){
    performers[0] = '\0';
    label[0] = '\0';
    selections = 0;
    playtime = 0.0;
}
Cd::Cd(char * s1, char * s2, int n, double x){
    strcpy(performers, s1);
    strcpy(label, s2);
    selections = n;
    playtime = x;
}
Cd::Cd(const Cd & d){
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}
Cd::~Cd(){}
void Cd::Report() const{
    cout << "Performers: " << performers << endl;
    cout << "Label: " << label << endl;
    cout << "Number of selections: " << selections << endl;
    cout << "Playing time in minutes: " << playtime << endl;
}
Cd & Cd::operator=(const Cd & d){
    if(this == &d){
        return *this;
    }
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}
//class Classic
Classic::Classic(){
    name[0] = '\0';
}
Classic::Classic(char * s1, char * s2, char * s3, int n, double x) : Cd(s1, s2, n, x){
    strcpy(name, s3);
}
Classic::Classic(const Classic & d, char * c) : Cd(d){
    strcpy(name, c);
}
Classic::Classic(const Classic & d) : Cd(d){
    name[0] = '\0';
}
Classic::~Classic(){}
void Classic::Report() const{
    cout << "Name: " << name << endl;
    Cd::Report();
}
Classic & Classic::operator=(const Classic & d){
    if(this == &d){
        return *this;
    }
    Cd::operator=(d);
    strcpy(name, d.name);
    return *this;
}
