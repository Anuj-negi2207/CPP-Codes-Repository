#include<iostream>
using namespace std;
class Parent
{
	public:
		int i;
	public:
		virtual void message()=0;
};
class first : public Parent
{
	public:
		void message()
		{
			cout<<"This is the first subclass";
		}
};
class second : public Parent
{
	public:
		void message()
		{
			cout<<"this is the second subclass";
		}
};
int main()
{
	first f;
	second s;
	f.message();
	s.message();
	return 0;
}
