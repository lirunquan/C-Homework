#ifndef WINE_H_
#define WINE_H_
#include <iostream>
#include <string>
#include <valarray>
using namespace std;
template <class T1, class T2>
class Pair {
private:
    T1 years;
    T2 bottles;
public:
    Pair(){}
    Pair(const T1 & t1, const T2 & t2) : years(t1), bottles(t2){}
    int Sum() const ;
    void show(int y) const;
    void Set(const T1 & t1, const T2 & t2);
};
template <class T1, class T2>
int Pair<T1, T2>::Sum() const{
    return bottles.sum();
}
template <class T1, class T2>
void Pair<T1, T2>::show(int y) const{
    for(int i=0;i<y;i++){
        cout << "\t\t" <<years[i] << "\t" << bottles[i] << endl;
    }
}
template <class T1, class T2>
void Pair<T1, T2>::Set(const T1 & t1, const T2 & t2) {
    years = t1;
    bottles = t2;
}

typedef valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;

class Wine : private string, private PairArray{
private:
    std::string winename;
    int year;
    PairArray out;
public:
    Wine(){}
    Wine(const char * c, int y, const int yr[], const int bot[]);
    Wine(const char * c, int y);
    void GetBottle();
    std::string & Label();
    int sum() const;
    void show() const;
};
#endif
