#include <iostream>
using namespace std;
double fah(double cel){
    return 1.8*cel+32;
}
int main(){
    double cel;
    cout << "Please enter a Celsius value: " ; 
    cin >> cel;
    cout << cel << " degrees Celsius is " << fah(cel) << " degrees Fahrenheit"<< endl;
}