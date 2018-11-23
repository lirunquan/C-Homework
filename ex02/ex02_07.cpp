#include <iostream>
using namespace std;
void out1(int a, int b){
    if(b<60){
        cout << "Time: "<<a<<":"<<b<<endl;
    }
    else{
        cout << "wrong input of minutes";
    }
}
int main(){
    int h,m;
    cout << "Enter the number of hours: ";
    cin>>h;
    cout << "Enter the number of minutes: ";
    cin>>m;
    out1(h,m);
}