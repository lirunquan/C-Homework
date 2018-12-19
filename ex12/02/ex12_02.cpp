#include <iostream>
#include <cstring>
#include <cctype>

class String
{
private:
    char *str;
    int len;
public:
    String ();
    ~String ();
    String ( const char * );
    String operator + ( const String & ) const;
    String & operator=(const char * s);
    friend String operator + ( const char *, const String & ) ;
    friend std::ostream & operator << ( std::ostream &, const String & );
    friend std::istream & operator >> ( std::istream &, String & );
    void stringlow();
    void stringup();
    int has ( char letter ) const;
    bool operator == ( const String & ) const;
    String & operator = ( const String & );
};
String::String ()
{
    len = 0;
    str = new char[1];
    str [0] = '\0';
}
String::~String ()
{
    delete []str;
}
String::String ( const char * c )
{
    len = std::strlen ( c );
    str = new char[len + 1];
    std::strcpy ( str, c );
}
String String::operator + ( const String & s ) const
{
    String temp;
    temp.len = len + s.len;
    delete []temp.str;
    temp.str = new char[temp.len + 1];
    std::strcpy ( temp.str, str );
    std::strcat ( temp.str, s.str );
    return temp;
}
String operator + ( const char * c, const String & s )
{
    String temp;
    delete []temp.str;
    temp.len = std::strlen ( c ) + s.len;
    temp.str = new char[temp.len + 1];
    std::strcpy ( temp.str, c );
    std::strcat ( temp.str, s.str );
    return temp;
}
std::ostream & operator << ( std::ostream & os, const String & s )
{
    os << s.str;
    return os;
}
std::istream & operator >> ( std::istream & in, String & s )
{
    char temp[100];
    in.get(temp,100);
    if(in)
        s=temp;
    while(in&&in.get()!='\n')
        continue;
    return in;
    
    
}
String & String::operator=(const char * s)
{
    delete [] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}
void String::stringlow()
{
    for ( int i = 0; i < len; i++ )
        str[i] = tolower ( str[i] );
}
void String::stringup()
{
    for ( int i = 0; i < len; i++ )
        str[i] = toupper ( str[i] );
}
int String::has ( char letter ) const
{
    int n = 0, i = 0;
    for ( ; i < len; i++ )
        if ( str[i] == 'A' )
            n++;
    return n;
}
bool String::operator == ( const String & s ) const
{
    int  i = 0;
    for ( ; i < len; i++ )
        if ( str[i] != s.str[i] )
            return false;
    
    return true;
}
String & String::operator = ( const String & s )
{
    delete []str;
    len = std::strlen ( s.str );
    str = new char[len + 1];
    std::strcpy ( str, s.str );
    return *this;
}




int main()
{
    using namespace std;
    String s1 ( " and I am a C++ student." );
    String s2 = "Please enter your name: ";
    String s3;
    cout << s2;   //overload <<operator
    cin >> s3;    //overload >>operator
    s2 = "My name is " + s3;    //overload = , + operators
    cout << s2 << ".\n";
    s2 = s2 + s1;
    s2.stringup();      //converts string to uppercase
    cout << "The string\n" << s2 << "\ncontains " << s2.has ( 'A' ) << " 'A' characters in it.\n";
    s1 = "red";     //String (const char *),
    //then String & operator= (const String&)
    String rgb[3] = { String ( s1 ), String ( "green" ), String ( "blue" ) };
    cout << "Enter the name of a primary color for mixing light: ";
    String ans;
    bool success = false;
    while ( cin >> ans )//记住用while循环，记得清空cin留下的回车换行符， 所以重载里要清楚回车换行符
    {
        ans.stringlow();        //converts string to lowercase
        for ( int i = 0; i < 3; i++ )
        {
            if ( ans == rgb[i] ) //overload == operator
            {
                cout << "That's right!\n";
                success = true;
                break;
            }
        }
        if ( success )
            break;
        else
            cout << "Try again!\n";
    }
    cout << "Bye\n";
    return 0;
}
