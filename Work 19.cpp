#include<iostream>
using namespace std;

class Account
{
	 public: double account_balance;
	 
	 public: 
	       Account(double a)
	       {
		    account_balance=a;
		   }
		   
		   void credit(double add)
		   {
		   	if(add<0)
		   	  cout<<"you cannot add -ve amount!"<<endl;
		   	  
		   	else
		   	{
		   	account_balance+=add;
		   	cout<<"you have added "<<add<<" amount in your account!"<<endl;
		    }
		   }
		   
		   
		   void debit(double money)
		   {
		   	if(money>account_balance)
		   	  cout<<"Debit amount exceeded account balance!"<<endl;
		   	
		   	else
		   	{
		   		cout<<money<<" amount is debitted."<<endl;
		   		account_balance-=money;
			}
		   }
	       
	 
	    void getBalance()
	    {
	    	cout<<"Money in your Account= "<<account_balance<<endl;
		}
};

int main()
{
	Account a(40000),b(500.5);
	
	
	a.debit(500);
	a.getBalance();
	cout<<"monry= "<<a.account_balance;
	
	b.credit(-4000);
	b.getBalance();
	
	a.debit(50000);
	a.getBalance();
}



