#include <iostream>
using namespace std;
void out(char *s, int n=0);
int main(){
    char ch[] = "Hello World";
    out(ch);
    for(int i=1;i<3;i++){
        out(ch, i);
    }
}
void out(char *s, int n){
    static int used = 0;
    ++ used;
    if(!n){
        cout<<s<<endl;
    }
    else{
        for(int i=0; i<used; i++){
            cout<<s<<endl;
        }
    }
    cout<<endl;
}