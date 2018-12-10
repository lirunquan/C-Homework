//第十章编程练习第1题  复习题5所描述的类
#ifndef ACCOUNT_H_
#define ACCOUNT_H_
using namespace std;

class Account{
	private:
		string name;
		string id;
		double money;
	public:
		Account(const string &m_name, const string &m_id, double m_money = 0.0);
		void saveMoney(double m_money);
		void withdraw(double m_money);
		void info() const;
};
#endif