#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int b=7;
	int &ref=b;
	int *p;
	p=&b;
	
	cout<<"Value at b: "<<b<<endl;
	cout<<"Value at ref: "<<ref<<endl;
	cout<<"value at pointer: "<<*p<<endl;
	ref--;
	p--;
	cout<<"Value at b: "<<b<<endl;
	cout<<"Value at ref: "<<ref<<endl;
	cout<<"Value at Pointer: "<<*p<<endl;
	return 0;
	}
