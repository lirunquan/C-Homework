#include <iostream>
#include <cstring>
using namespace std;
template<typename T>
T maxn(T *a, const int n){
    for(int i=0;i<n;i++){
        if(a[i]>a[0]) a[0] = a[i];
    }
    return a[0];
}
template<> const char* maxn(const char **a, const int n){
    int i, j=0;
    for(i=0;i<n;i++){
        if(strlen(a[i])>strlen(a[j])){
            j=i;
        }
    }
    return a[j];
}
int main(){
    int a[6] = {2,5,1,7,8,9};
    double b[4] = {3.5,0.6,5.7,2.9};
    const char *c[5] = {"hello", "wwwwworld", "hole", "make", "done"};
    cout << maxn(a,6) << endl << maxn(b, 4) << endl << maxn(c,5)<< endl;
    return 0;
}