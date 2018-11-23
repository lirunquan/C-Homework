#include <iostream>
#include <string>
using namespace std;
int main(){
    cout<<"Enter words (to stop, type word done): "<<endl;
    int count = 0;
    string str;
    getline(cin, str);
    int pos = 0;
    for(int i=0;i<str.length();i++){
        if(str.at(i) == ' '){
            string s1;
            if(pos == 0){
                s1 = str.substr(pos, i);
            }
            else{
                s1 = str.substr(pos+1, i-1-pos);
            }
            pos = i;
            cout << s1 <<";";
            if(s1 != "done" && s1.length() > 0){
                count ++;
            }
            if(s1 == "done") break;
        }
    }
    cout<<"You entered a total of "<<count<<" words. "<<endl;
}