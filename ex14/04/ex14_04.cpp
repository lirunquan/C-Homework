#include <iostream>
#include <cstring>
#include "person.h"
using namespace std;
const int SIZE = 5;
int main(){
    Person * lolas[SIZE];
    int ct;
    for (ct = 0; ct < SIZE; ct ++) {
        char choice;
        cout << "Enter the employee category: \n" << "g: Gunslinger p: PokerPlayer  " << "b: BadDude q: Quit\n";
        cin >> choice;
        while (strchr("gpbq", choice) == NULL) {
            cout << "Please enter the correct choice(g, p, b, or q): ";
            cin >> choice;
        }
        if(choice == 'q'){
            break;
        }
        switch (choice) {
            case 'g' :
                lolas[ct] = new Gunslinger();
                break;
            case 'p' :
                lolas[ct] = new PokerPlayer();
                break;
            case 'b' :
                lolas[ct] = new BadDude();
                break;
            default:
                break;
        }
        cin.get();
        lolas[ct]->Set();
    }
    cout << "\nHere is the people you input:\n";
    int i;
    for (i = 0; i < ct; i++) {
        cout << endl;
        lolas[i]->Show();
    }
    for (i=0; i<ct; i++) {
        delete lolas[i];
    }
    cout << "Bye\n" << endl;
    return 0;
}
