#include<iostream>
using namespace std;

class Bank
{
	protected:
	int balance;
	
	public:		
		virtual void getBalance()=0;
};

class BankA: public Bank
{
	public:
		void getBalance()
		{
			balance=100;
			cout<<"Bank A have $"<<balance<<endl;
		}
};

class BankB: public Bank
{
	public:
		void getBalance()
		{
			balance=150;
			cout<<"Bank B have $"<<balance<<endl;
		}
};

class BankC: public Bank
{
	public:
		void getBalance()
		{
			balance=200;
			cout<<"Bank C have $"<<balance<<endl;
		}
};


int main()
{
	BankA a;
	BankB b;
	BankC c;
	
	a.getBalance();
	b.getBalance();
	c.getBalance();
	
	return 0;
}
