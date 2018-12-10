#include <iostream>
#include <cstring>
using namespace std;
int main(){
    cout<<"Enter words (to stop, type word done): "<<endl;
    char c[20] = "0";
    cin>>c;
    int count = 0;
    while(strcmp(c,"done")!=0){
        cin>>c;
        count++;
    }
    cout<<"You entered a total of "<<count<<" words. "<<endl;
}