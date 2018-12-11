#include <iostream>
#include "sales.h"
int main(){
    SALES::Sales s1;
    SALES::Sales s2;
    int n;
    std::cout << "Input number of items: ";
    std::cin >> n;
    double ar[n];
    std::cout << "Input items: \n";
    for (int i=0; i<n; i++) {
        std::cin >> ar[i];
    }
    SALES::setSales(s1, ar, n);
    SALES::showSales(s1);
    
    SALES::setSales(s2);
    SALES::showSales(s2);
    return 0;
}
