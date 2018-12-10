//编程练习1 银行账户类的实现
#include <iostream>
#include "account.h"
#include <string>
using namespace std;
Account::Account(const string &m_name, const string &m_id, double m_money){
	name = m_name;
	id = m_id;
	money = m_money;
}
void Account::saveMoney(double m_money){
	if(m_money < 0){
		cout << "Invalid number of money.";
	}
	else{
		cout << name << " Saving money..." << endl;
		money += m_money;
	}
}
void Account::withdraw(double m_money){
	if(m_money < 0){
		cout << "Invalid number of money.";
	}
	else if(m_money > money){
		cout << "You cannot withdraw so much money.";
	}
	else{
		cout << name << " Whthdrawing money..." << endl;
		money -= m_money;
	}
}
void Account::info() const{
	cout << "Account: " << endl;
	cout << "name: " << name << endl;
	cout << "id: " << id << endl;
	cout << "money: " << money << endl;
}