#include <iostream>
#include <fstream>
#include <ostream>
using namespace std;
int main(){
    ifstream file("08.txt");
    if(!file){
        cout << "Failed to open file" << endl;
        exit(EXIT_FAILURE);
    }
    else{
        int n=0;
        char c;
        while(!file.eof()){
            file >> c;
            n++;
        }
        if(n==0) cout << "The file has no character."<< endl;
        else cout << "The file includes " << n << " character(s). "<< endl;
        return 0;
    }
}