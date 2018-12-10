#include <iostream>
#include <array>
using namespace std;
int main(){
    array<double,3> scores ;
    double s = 0;
    for(int i=0;i<3;i++){
        cout<<"Enter the scores of 40 yards: ";
        double score ;
        cin>>score;
        scores[i] = score;
        s+=scores.at(i);
    }
    cout<<scores.size() <<endl<<s/scores.size()<<endl;
}