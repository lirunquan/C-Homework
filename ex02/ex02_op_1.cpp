#include <iostream>
using namespace std;
struct Student{
    string name;
    string sex;
    string birthday;
};
int main(){
    Student a;
    cout<<"Enter name: ";
    cin >> a.name;
    cout<<"Enter sex: ";
    cin >> a.sex;
    cout<<"Enter birthday: ";
    cin >> a.birthday;
    cout << a.name << endl <<
            a.sex  << endl <<
            a.birthday << endl;
}