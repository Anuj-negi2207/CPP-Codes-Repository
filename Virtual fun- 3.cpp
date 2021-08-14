#include<iostream>
using namespace std;

class Animals
{
	public:
		virtual void cats()=0;
		virtual void dogs()=0;
		
};

class Cats: public Animals
{
	public: 
		void cats()
		{
			cout<<"Cats meow\n";
		}
		
		void dogs() {}
};

class Dogs: public Animals
{
	public:
		void dogs()
		{
			cout<<"Dogs bark\n";
		}
		
		void cats() {}
};

int main()
{
	Cats c;
	Dogs d;
	
	c.cats();
	d.dogs();
	
	return 0;
}
