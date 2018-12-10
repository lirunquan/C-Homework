#include <iostream>
using namespace std;
template<typename T>
T max5(T *a){
    for(int i=0;i<5;i++){
        if(a[i]>a[0]) a[0]=a[i];
    }
    return a[0];
}
int main(){
    int a[5] = {1,2,12,15,21};
    double b[5] = {1.4,2.5,3.33,99.5,7.4};
    cout << max5(a)<<endl<<max5(b)<<endl;
    return 0;
}