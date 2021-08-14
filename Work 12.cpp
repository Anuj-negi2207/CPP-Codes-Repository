#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"enter two values: ";
	cin>>a>>b;
	
	if(a==b)
	cout<<"Both numbers are equal!";
	
	else
	{
		if(a>b)
		cout<<a<<"is greater than "<<b;
		
		else 
		cout<<b<<"is greater than "<<a;
	}
	
	return 0;
}
