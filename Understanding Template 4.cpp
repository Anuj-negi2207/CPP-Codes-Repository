#include<iostream>
using namespace std;

template <class t>
t sum(t a, t b)
{
	return a+b;
}

int main()
{
	cout<<"SUM 1= "<<sum(2.0,1.5);
	
	cout<<endl<<"SUM 2= "<<sum(3,1);
	
	return 0;
}
