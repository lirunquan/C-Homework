#include <iostream>
using namespace std;
double ast(double light){
    return 63240*light;
}
int main(){
    cout<<"Enter the number of light years: ";
    double light ;
    cin>>light;
    cout << light << " light years = "<<ast(light)<<" astronomical units."<<endl;
}