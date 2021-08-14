#include<iostream>
using namespace std;

template<class t>
t sum(t a,t b)
{
	return a+b;
}
int main()
{
	cout<<"Sum of interger is"<<sum(5,9);
	cout<<"Sum of float is:"<<sum(1.5,4.5);
	return 0;
}
