#include "person.h"
#include <iostream>
#include <string>
using namespace std;
Person::~Person(){}
void Person::Data() const{
    cout << "First name: " << firstname << endl;
    cout << "Last name: " << lastname << endl;
}
void Person::Get(){
    cout << "Enter person's firstname: " ;
    getline(cin, firstname);
    cout << "Enter person's lastname: ";
    getline(cin, lastname);
}
void Gunslinger::Data() const{
    cout << "The time: " << time << endl;
    cout << "The number of scotch: " << num << endl;
}
void Gunslinger::Get(){
    cout << "Enter gunslinger's time: ";
    cin >> time;
    cout << "Enter gunslinger's number of scotch: ";
    cin >> num;
    while (cin.get() != '\n') {
        continue;
    }
}
void Gunslinger::Set(){
    Person::Get();
    Get();
    cout << endl;
}
void Gunslinger::Show() const{
    cout << "Category: Gunslinger\n";
    Person::Data();
    Data();
}
void PokerPlayer::Data() const{
    cout << "The card number: " << card << endl;
}
void PokerPlayer::Get(){
    cout << "Enter PokerPlayer's card: ";
    cin >> card;
    while (cin.get() != '\n') {
        continue;
    }
}
void PokerPlayer::Set(){
    Person::Get();
    Get();
    cout << endl;
}
void PokerPlayer::Show() const{
    cout << "Category: PokerPlayer\n";
    Person::Data();
    Data();
}
void BadDude::Data() const{
    Gunslinger::Data();
    PokerPlayer::Data();
}
void BadDude::Get(){
    Gunslinger::Get();
    PokerPlayer::Get();
}
void BadDude::Set(){
    Person::Get();
    Get();
    cout << endl;
}
void BadDude::Show() const{
    Person::Data();
    Data();
}
