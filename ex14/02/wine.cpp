#include "wine.h"
Wine::Wine(const char * c, int y, const int yr[], const int bot[]){
    winename = c;
    year = y;
    out.Set(ArrayInt(yr, year), ArrayInt(bot, year));
}
Wine::Wine(const char * c, int y){
    winename = c;
    year = y;
}
void Wine::GetBottle(){
    ArrayInt yr(year),bt(year);
    for(int i=0; i<year; i++){
        cout << "Enter year: ";
        cin >> yr[i];
        cout << "Enter bottles: ";
        cin >> bt[i];
    }
    out.Set(yr, bt);
}
std::string & Wine::Label(){
    return (string &)*this;
}
int Wine::sum() const{
    return out.Sum();
}
void Wine::show() const{
    cout << "Wine: " << (string & )*this << endl;
    cout << "\t\tYear\tBottles\n";
    out.show(year);
}
