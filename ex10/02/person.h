#ifndef PERSON_H_
#define PERSON_H_
#include <string>
using namespace std;
class Person{
    private:
        static const int LINIT = 25;
        string lname;
        char fname[LINIT];
    public:
    Person(){lname = ""; fname[0] = '\0';}
    Person(const string & ln, const char * fn = "Heyyou");
    void show() const;
    void FormalShow() const;
};
#endif // !PERSON_H_