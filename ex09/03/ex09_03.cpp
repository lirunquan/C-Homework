#include <iostream>
#include <new>
#include <cstring>
using namespace std;
struct chaff{
    char dross[20];
    int slag;
};
const int BUF = 512;
const int N = 2;
char buffer[BUF];
const char ch[] = "hello";
int main(){
    chaff *p1, *p2;
    int i;
    cout << "Calling new and placing new: ";
    p1 = new chaff;
    p2 = new (buffer) chaff;
    for(i=0; i<N; i++){
        p2[i].slag = p1[i].slag = 1000+20+i;
        strcpy(p1[i].dross, ch);
        strcpy(p2[i].dross, ch);
    }
    cout << "Memory addresses: " << endl << "heap: " << p1
    << "   static: " << (void*) buffer << endl;
    cout << "Memory contents: " << endl;
    for(i=0; i<N; i++){
        cout << p1[i].dross << " at " << &p1[i].dross << endl;
        cout << p1[i].slag << " at " << &p1[i].slag << endl;
        cout << "\t" << p2[i].dross << " at " << &p2[i].dross << endl;
        cout << "\t" << p2[i].slag << " at " << &p2[i].slag << endl;
    }
    cout << "Calling new and placement new a second time: " << endl;
    chaff *p3, *p4;
    p3 = new chaff;
    p4 = new (buffer) chaff;
    for(i=0; i<N; i++){
        p4[i].slag = p3[i].slag = 1000+40+i;
        strcpy(p3[i].dross, ch);
        strcpy(p4[i].dross, ch);
    }
    cout << "Memory addresses: " << endl << "heap: " << p1
    << "   static: " << (void*) buffer << endl;
    cout << "Memory contents: " << endl;
    for(i=0; i<N; i++){
        cout << p3[i].dross << " at " << &p3[i].dross << endl;
        cout << p3[i].slag << " at " << &p3[i].slag << endl;
        cout << "\t" << p4[i].dross << " at " << &p4[i].dross << endl;
        cout << "\t" << p4[i].slag << " at " << &p4[i].slag << endl;
    }
    cout << "Calling new and placement new a third time: " << endl;
    delete [] p1;
    p1 = new chaff;
    p2 = new (buffer + N *sizeof(chaff)) chaff;
    for(i=0; i<N; i++){
        p2[i].slag = p1[i].slag = 1000+60+i;
        strcpy(p1[i].dross, ch);
        strcpy(p2[i].dross, ch);
    }
    cout << "Memory addresses: " << endl << "heap: " << p1
    << "   static: " << (void*) buffer << endl;
    cout << "Memory contents: " << endl;
    for(i=0; i<N; i++){
        cout << p1[i].dross << " at " << &p1[i].dross << endl;
        cout << p1[i].slag << " at " << &p1[i].slag << endl;
        cout << "\t" << p2[i].dross << " at " << &p2[i].dross << endl;
        cout << "\t" << p2[i].slag << " at " << &p2[i].slag << endl;
    }
    delete [] p1;
    delete [] p3;
    return 0;
}
