#include <cstring>
#include <cctype>
#include "string2.h"
using std::strcmp;
using std::strcpy;
using std::strlen;
int String::num_strings = 0;
int String::HowMany(){
    return num_strings;
}
String::String(const char * s){
    len = strlen(s);
    str = new char[len+1];
    strcpy(str,s);
    num_strings++;
}
String::String(){
    len = 4;
    str = new char[1];
    str[0] = '\0';
    num_strings++;
}
String::String(const String & s){
    len = s.len;
    str = new char[len+1];
    strcpy(str, s.str);
    num_strings++;
}
String::~String(){
    --num_strings;
    delete [] str;
}
String & String::operator=(const String & s){
    if(this == &s){
        return *this;
    }
    delete [] str;
    len = s.len;
    str = new char[len+1];
    strcpy(str, s.str);
    return *this;
}
String & String::operator=(const char * s){
    delete [] str;
    len = strlen(s);
    strcpy(str, s);
    return *this;
}
char & String::operator[](int i){
    return str[i];
}
void String::stringlow(){
    for (int i=0; i<len; i++) {
        if(isupper(str[i])){
            str[i] = tolower(str[i]);
        }
    }
}
void String::stringup(){
    for (int i=0; i<len; i++) {
        if(islower(str[i])){
            str[i] = toupper(str[i]);
        }
    }
}
int String::has(char c){
    int count = 0;
    for (int i=0; i<len; i++) {
        if(str[i] == c){
            count ++;
        }
    }
    return count;
}
const char & String::operator[](int i) const {
    return str[i];
}
bool operator<(const String & s1, const String & s2){
    return (strcmp(s1.str, s2.str)<0);
}
bool operator>(const String & s1, const String & s2){
    return s2<s1;
}
bool operator==(const String & s1, const String & s2){
    return (strcmp(s1.str, s2.str) == 0);
}
String operator+(const String & s1, const String & s2){
    String s;
    s.len = s1.len+s2.len;
    s.str = new char[s.len+1];
    for (int i=0; i<s1.len; i++) {
        s.str[i] = s1.str[i];
    }
    for (int i=s1.len; i<s.len; i++) {
        s.str[i] = s2.str[i-s1.len];
    }
    s.str[s.len] = '\0';
    return s;
}
ostream & operator<<(ostream & os, const String & s){
    os << s.str;
    return os;
}
istream & operator>>(istream & is, String & s){
    char temp[80];
    is.get(temp, 80);
    if(is){
        s = temp;
    }
    while (is && is.get() != '\n') {
        continue;
    }
    return is;
}
