#include <iostream>
#include "stonewt.h"
using std::cout;
using std::cin;
int main(){
    Stonewt stones[6];
    stones[0] = 285.9;
    stones[1] = 235.6;
    stones[2] = 262.4;
    for (int i=3; i<6; i++) {
        double n;
        cout << "Please enter the number #" << i+1 << ": ";
        cin >> n;
        stones[i] = n;
    }
    Stonewt stand(11,0);
    Stonewt max;
    Stonewt min;
    int imax;
    int imin;
    max = min = stones[0];
    imax = imin = 0;
    for (int i=0; i<6; i++) {
        if(min > stones[i]){
            min = stones[i];
            imin = i;
        }
        if(max < stones[i]){
            max = stones[i];
            imax = i;
        }
    }
    cout << "The max is: incognito[" << imax << "]: " << max;
    cout << "The min is: incognito[" << imin << "]: " << min;
    cout << "The weight more than 11 stone is: \n";
    for (int i=0; i<6; i++) {
        if(stones[i] > stand){
            cout << "incognito[" << i << "]: " << stones[i];
        }
    }
    return 0;
}
