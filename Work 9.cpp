#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int x,n,i;
	float a[100];
	
	cout<<"Enter the value of x and it's degree: ";
	cin>>x>>n;
	
	cout<<"Enter Coefficients : \n";
	for(i=n;i>=0;i--)
	{
		cout<<"\ta_"<<i<<"= ";
		cin>>a[i];
	}
	
	long double d;
	d=0;
	
	cout<<a[n]<<"x^"<<n;
	for(i=n;i>0;i--)
	{
		cout<<" + "<<a[i-1]<<"x^"<<i-1;
		d+= (a[i]*(pow(x,i)));
	}
	d+= a[0]*(pow(x,0));
	
	cout<<"= "<<d;
	
	return 0;
}
