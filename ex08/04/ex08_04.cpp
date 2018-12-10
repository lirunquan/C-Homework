#include <iostream>
#include <cstring>
using namespace std;
struct stringy{
    char * str;
    int ct;
};

void set(stringy&a, const char* t){
    a.ct = strlen(t)+1;
    a.str = new char[a.ct];
    strcpy(a.str, t);
}
void show(const stringy&a, int n=1){
    for(int i=0;i<n;i++){
        cout<<a.str<<endl;
    }
}
void show(const char*t, int n=1){
    for(int i=0;i<n;i++){
        if(strcmp(t, "Done!") == 0){
            cout << "Done!"<<endl;
            break;
        }
        cout << t<<endl;
    }
}
int main(){
    stringy s;
    char testing[] = "Reality isn't waht it used to be.";
    set(s, testing);
    show(s);
    show(s,2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing,3);
    show("Done!");
    return 0;
}