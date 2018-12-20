#ifndef EMP_H_
#define EMP_H_
#include <iostream>
#include <string>
using namespace std;
class abstr_emp {
private:
    string fname;
    string lname;
    string job;
public:
    abstr_emp() : fname("no name"), lname("no name"), job("no job"){}
    abstr_emp(const string & fn, const string & ln, const string & j) : fname(fn), lname(ln), job(j){}
    virtual void ShowAll() const;
    virtual void SetAll();
    friend ostream & operator<<(ostream & os, const abstr_emp & e);
    virtual ~abstr_emp() = 0;
};
class employee : public abstr_emp {
public:
    employee(const string & fn, const string & ln, const string & j) : abstr_emp(fn, ln, j){}
    virtual void ShowAll() const;
    virtual void SetAll();
};
class manager : virtual public abstr_emp {
private:
    int inchargeof;
protected:
    int Inchargeof() const { return inchargeof;}
    int & Inchargeof() { return inchargeof;}
public:
    manager() : inchargeof(0){}
    manager(const string & fn, const string & ln, const string & j, int ico = 0) : abstr_emp(fn,ln,j), inchargeof(ico){}
    manager(const abstr_emp & e, int ico) : abstr_emp(e), inchargeof(ico){}
    manager(const manager & m) : abstr_emp(m){ inchargeof = m.inchargeof;}
    virtual void ShowAll() const;
    virtual void SetAll();
};
class fink : virtual public abstr_emp {
private:
    string reportsto;
protected:
    const string ReportsTo() const { return reportsto;}
    string & ReportsTo(){ return reportsto;}
public:
    fink() : reportsto("no name"){}
    fink(const string & fn, const string & ln, const string & j, const string & rpo) : abstr_emp(fn, ln, j), reportsto(rpo){}
    fink(const abstr_emp & e, const string & rpo) : abstr_emp(e), reportsto(rpo){}
    fink(const fink & f) : abstr_emp(f){}
    virtual void ShowAll() const;
    virtual void SetAll();
};
class highfink : public manager, public fink {
    
public:
    highfink(){}
    highfink(const string & fn, const string & ln, const string & j, int ico, const string & rpo) : abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo){}
    highfink(const abstr_emp & e, int ico, const string & rpo) : abstr_emp(e), manager(e, ico), fink(e, rpo){}
    highfink(const fink & f, int ico) : abstr_emp(f), fink(f), manager(f, ico){}
    highfink(const manager & m, const string & rpo) : abstr_emp(m), manager(m), fink(m,rpo){}
    highfink(const highfink & h) : abstr_emp(h), fink(h), manager(h){}
    virtual void ShowAll() const;
    virtual void SetAll();
};
#endif
