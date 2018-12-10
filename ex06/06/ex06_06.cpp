#include <iostream>
using namespace std;
struct Donate{
    string name;
    double amount;
};
int main(){
    int n;
    cout<<"Enter the number of subscribers: ";
    cin >> n;
    Donate* d = new Donate[n];
    for(int i=0; i<n; i++){
        cout<<"name: ";
        cin >> d[i].name;
        cout<<"amount: ";
        cin >> d[i].amount;
    }
    int gp=0, p=0;
    cout << "Grant Patrons: " << endl;
    for(int i=0;i<n;i++){
        if(d[i].amount >10000){
            gp ++ ;
            cout<<"name: "<<d[i].name<< "\t" <<"amount: "<<d[i].amount<<endl;
        }
    }
    if(gp==0) cout<<"none"<<endl;
    cout<<"Patrons: "<<endl;
    for(int i=0;i<n;i++){
        if(d[i].amount<10000){
            p++;
            cout<<"name: "<<d[i].name<< "\t" <<"amount: "<<d[i].amount<<endl;
        }
    }
    if(p==0) cout<<"none"<<endl;
    return 0;
    delete []d;
}