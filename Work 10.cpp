#include<iostream>
#include<math.h>

using namespace std;

long double root(double n,int c)
{
	if(c<40)
	{
		n=sqrt(n);
		c++;
	 	return root(n,c);	
	}
	 
	else
		return n;
}

int main()
{
	long double n;
	int c=1;
	
	cin>>n;
	n=root(n,c);
	cout<<"\n\n"<<n;
}
