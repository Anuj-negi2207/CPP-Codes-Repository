#include<iostream>
using namespace std;

class Parent 
{
	public:
		virtual void message()=0;
};

class First: public Parent
{
	public:
	void message()
	{
		cout<<"This is first subclass";
	}
};

class Second: public Parent
{
	public:
	void message()
	{
		cout<<"This is second subclass";
	}
};

int main()
{
	First f;
	Second s;
	
	f.message();
	s.message();
	
	return 0;
}
