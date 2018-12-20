#include "emp.h"
#include <iostream>
#include <string>
using namespace std;
abstr_emp::~abstr_emp(){}
void abstr_emp::ShowAll() const{
    cout << "First name: " << fname << endl;
    cout << "Last name: " << lname << endl;
    cout << "Job: " << job << endl;
}
void abstr_emp::SetAll(){
    cout << "Enter the firstname: " << endl;
    getline(cin, fname);
    cout << "Enter the lastname: " << endl;
    getline(cin, lname);
    cout << "Enter the job: " << endl;
    getline(cin, job);
}
ostream & operator<<(ostream & os, const abstr_emp & e){
    os << e.fname << " " << e.lname;
    return os;
}
void employee::ShowAll() const{
    abstr_emp::ShowAll();
    cout << endl;
}
void employee::SetAll(){
    abstr_emp::SetAll();
}
void manager::ShowAll() const{
    abstr_emp::ShowAll();
    cout << "Inchargeof: " << inchargeof << endl;
    cout << endl;
}
void manager::SetAll(){
    abstr_emp::SetAll();
    cout << "Enter the inchargeof: " << endl;
    cin >> inchargeof;
    while (cin.get() != '\n') {
        continue;
    }
}
void fink::ShowAll() const{
    abstr_emp::ShowAll();
    cout << "ReportsTo: " << reportsto << endl;
    cout << endl;
}
void fink::SetAll(){
    abstr_emp::SetAll();
    cout << "Enter the reportsto: " << endl;
    getline(cin, reportsto);
}
void highfink::ShowAll() const{
    manager::ShowAll();
    cout << "ReportsTo: " << ReportsTo() << endl;
    cout << endl;
}
void highfink::SetAll(){
    manager::SetAll();
    cout << "Enter the reportsto: " << endl;
    getline(cin, fink::ReportsTo());
}
