#include<iostream>
using namespace std;

template<class t1,class t2>
float sum(t1 a, t2 b)
{
	return a+b;
}

int main()
{
	cout<<"Sum of value is:"<<sum(5,9.3);
	cout<<"Sum of the value is"<<(1.5,5);
	cout<<"sum of the value is"<<(20,40);
	cout<<"sum of the value is"<<(2.7,4.4);
	return 0;
}
