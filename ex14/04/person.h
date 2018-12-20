#ifndef PERSON_H_
#define PERSON_H_
#include <iostream>
#include <string>
using namespace std;
class Person{
private:
    string firstname;
    string lastname;
protected:
    virtual void Data() const ;
    virtual void Get() ;
public:
    Person() : firstname("null"), lastname("null"){}
    Person(string fn, string ln) : firstname(fn), lastname(ln){}
    virtual ~Person() = 0;
    virtual void Set() = 0;
    virtual void Show() const= 0;
};
class Gunslinger : virtual public Person{
private:
    double time;//拔枪时间
    int num;//d刻痕数
protected:
    void Data() const;
    void Get();
public:
    Gunslinger() : Person(), time(0.0), num(0){}
    Gunslinger(string fn, string ln, double t, int n) : Person(fn, ln), time(t), num(n){}
    Gunslinger(Person & p, double t, int n) : Person(p), time(t), num(n){}
    double Drawtime(){ return time; }
    void Set();
    void Show() const;
};
class PokerPlayer : virtual public Person{
private:
    int card;//扑克牌
protected:
    void Data() const;
    void Get();
public:
    PokerPlayer() : Person(), card(1){}
    PokerPlayer(string fn, string ln, int c) : Person(fn, ln), card(c){}
    PokerPlayer(Person & p, int c) : Person(p), card(c){}
    int Drawcard() { return card; }
    void Set();
    void Show() const;
};
class BadDude : public Gunslinger, public PokerPlayer{
protected:
    void Data() const;
    void Get();
public:
    BadDude(){}
    BadDude(string fn, string ln, double t = 0.0, int n = 0, int c = 1) : Person(fn, ln), Gunslinger(fn, ln, t, n), PokerPlayer(fn, ln, c){}
    BadDude(Person & p, double t, int n, int c) : Person(p), Gunslinger(p, t, n), PokerPlayer(p, c){}
    BadDude(Gunslinger & g, int c) : Person(g), Gunslinger(g), PokerPlayer(g, c){}
    BadDude(PokerPlayer & pp, double t, int n) : Person(pp), Gunslinger(pp, t, n), PokerPlayer(pp){}
    double GDraw(){ return Drawtime(); }
    int CDraw(){ return Drawcard(); }
    void Set();
    void Show() const;
};
#endif
