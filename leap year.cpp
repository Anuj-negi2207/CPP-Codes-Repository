#include<iostream>

using namespace std;

int main()
{
	int i;
	
	cout<<"Enter any Year of your choice(eg.- 2000): ";
	cin>>i;
	
	if(i%4==0&&i%100!=0||i%400==0)
	cout<<i<<" is a Leap year!";
	
	else
	cout<<i<<" is not a Leap year!";
}
