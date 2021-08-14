#include<iostream>
using namespace std;

class A
{
	public:
		A()
		{cout<<"A";
		}
		
		~A()
		{
			cout<<"\nDel A";
		}
};

class C
{
	public:
		C()
		{cout<<"C";
		}
		
		~C()
		{
			cout<<"\nDel C";
		}
};



class B: public C, public A
{
	public:
		B()
		{
			cout<<"B";
		}
		~B()
		{
			cout<<"\nDel B";
		}
};

int main()
{
	B o;
    
	return 0;
}
