#include "cd.h"
#include <iostream>
#include <cstring>
using namespace std;
//class Cd
Cd::Cd(){
    performers = new char[1];
    performers[0] = '\0';
    label = new char[1];
    label[0] = '\0';
    selections = 0;
    playtime = 0.0;
}
Cd::Cd(char * s1, char * s2, int n, double x){
    performers = new char(strlen(s1) + 1);
    strcpy(performers, s1);
    label = new char(strlen(s2) + 1);
    strcpy(label, s2);
    selections = n;
    playtime = x;
}
Cd::Cd(const Cd & d){
    performers = new char(strlen(d.performers) + 1);
    strcpy(performers, d.performers);
    label = new char(strlen(d.label) + 1);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}
Cd::~Cd(){
    delete [] performers;
    delete [] label;
}
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
    delete [] performers;
    delete [] label;
    performers = new char(strlen(d.performers) + 1);
    strcpy(performers, d.performers);
    label = new char(strlen(d.label) + 1);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}
//class Classic
Classic::Classic(){
    name = new char[1];
    name[0] = '\0';
}
Classic::Classic(char * s1, char * s2, char * s3, int n, double x) : Cd(s1, s2, n, x){
    name = new char[strlen(s3)+1];
    strcpy(name, s3);
}
Classic::Classic(const Classic & d, char * c) : Cd(d){
    name = new char[strlen(d.name)+1];
    strcpy(name, c);
}
Classic::~Classic(){
    delete [] name;
}
void Classic::Report() const{
    cout << "Name: " << name << endl;
    Cd::Report();
}
Classic & Classic::operator=(const Classic & d){
    if(this == &d){
        return *this;
    }
    Cd::operator=(d);
    delete [] name;
    name = new char[strlen(d.name) + 1];
    strcpy(name, d.name);
    return *this;
}
