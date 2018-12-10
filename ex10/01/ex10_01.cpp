#include <iostream>
#include "account.h"
#include <string>
using namespace std;

int main(){
	Account a("Bill", "0001", 10000);
	a.info();
	Account b("Anny", "0002", 4096);
	b.info();
	a.withdraw(1000);
	a.info();
	b.saveMoney(1024);
	b.info();
	a.saveMoney(55);
	a.info();
	b.withdraw(2048);
	b.info();
	return 0;
}