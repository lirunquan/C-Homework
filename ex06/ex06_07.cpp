#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main(){
    cout<<"Enter words(q to quit): "<<endl;
    string str;
    int vow=0, con=0, other=0;
    while(cin>>str && str!="q"){
        if(isalpha(str.at(0))){
            if(isupper(0)){
                str.at(0) = char(tolower(str.at(0)));
            }
            if(str[0] == 'a'||str[0]=='e'||str[0]=='i'||str[0]=='o'||str[0]=='u'){
                vow++;
            }
            else{
                con++;
            }
        }
        else{
            other++;
        }
    }
    cout<<vow<<" words beginning with vowels."<<endl;
    cout<<con<<" words beginning with consonants."<<endl;
    cout<<other<<" others."<<endl;
}