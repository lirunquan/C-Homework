#include <iostream>
#include "sales.h"
namespace SALES{
    using std::cout;using std::cin;
    void setSales(Sales & s, const double ar[] , int n){
        double sum, max, min;
        min = max = ar[0];
        sum = 0.0;
        for(int i=0; i<n; i++){
            s.sales[i] = ar[i];
            sum += ar[i];
            if(ar[i]>max){
                max = ar[i];
            }
            if(ar[i]<min){
                min = ar[i];
            }
        }
        s.average = sum/n;
        s.max = max;
        s.min = min;
    }
    void setSales(Sales & s){
        double ar[QUARTERS];
        cout << "Input 4 numbers: \n";
        for(int i=0; i<QUARTERS; i++){
            cin >> ar[i];
        }
        double sum, max, min;
        min = max = ar[0];
        sum = 0.0;
        for(int i=0; i<QUARTERS; i++){
            s.sales[i] = ar[i];
            sum += ar[i];
            if(ar[i]>max){
                max = ar[i];
            }
            if(ar[i]<min){
                min = ar[i];
            }
        }
        s.average = sum/QUARTERS;
        s.max = max;
        s.min = min;
    }
    void showSales(const Sales & s){
        for(int i=0; i<QUARTERS; i++){
            cout << s.sales[i] << " " ;
        }
        cout << "\nAverage: " << s.average << "\nMax: " << s.max << "\nMin: " << s.min << std::endl;
    }
}
