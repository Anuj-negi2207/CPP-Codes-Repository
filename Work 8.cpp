#include<iostream>
using namespace std;

template<class t>
t func(t a)
{
	cout<<a;
	return a;
}

template<class u>
float func(u a)
{
	cout<<a;
}

int main()
{
	int a=5;
	int b;
	b=func(a);
	return 0;
}
