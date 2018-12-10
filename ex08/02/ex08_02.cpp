#include <iostream>
#include <cstring>
using namespace std;
struct CandyBar{
    char name[30];
    double weight;
    int cal;
};
void setCandyBar(CandyBar &c, const char* ch = "Millennium Munch", const double w = 2.85, const int cal = 350);
void getCandyBar(const CandyBar &c);
int main(){
    CandyBar candy1, candy2;
    setCandyBar(candy1);
    setCandyBar(candy2, "Alps", 1.2, 10);
    getCandyBar(candy1);
    getCandyBar(candy2);
}
void setCandyBar(CandyBar &c, const char* ch, const double w, const int cal){
    strcpy(c.name, ch);
    c.weight = w;
    c.cal = cal;
}
void getCandyBar(const CandyBar &c){
    cout<<c.name<<endl<<c.weight<<endl<<c.cal<<endl;
}