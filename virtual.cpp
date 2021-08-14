#include<iostream>
using namespace std;

class paper
{
	
	public: 
	char a[10]="A4";
	
		void papertype()
		{
			cout<<"This is "<<a<<" type of paper!"<<endl;
		}
};

class paperplane:public paper
{
	char b[10]="best";
	public:
		void planetype()
		{
			cout<<"Paper type is "<<a<<",So the Paperplane have the "<<b<<" Quality!"<<endl;
		}
};

int main()
{
	paperplane p;
	p.papertype();
	p.planetype();
}
