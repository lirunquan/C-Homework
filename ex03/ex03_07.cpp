#include <iostream>
using namespace std;
struct Pizza{
    string company;
    double diameter;
    double weight;
};
int main(){
    Pizza p;
    cout<<"Enter company: ";
    cin>>p.company;
    cout<<"Enter diameter: ";
    cin>>p.diameter;
    cout<<"Enter weight: ";
    cin>>p.weight;
    cout<<p.company<<endl<<p.diameter<<endl<<p.weight<<endl;
}