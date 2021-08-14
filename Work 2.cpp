#include<iostream>
#include<math.h>
using namespace std;

int result(int n, int *y)
{
	if(n>1)
	{
	n=sqrt(n++);
	y=&n;
	cout<<"\t"<<n;
	return n*result(n,y);
	}
	
	return 1;
}

int main()
{
	int n=82,*p;
	p=&n;
	cout<<"\n\n"<<result(n++,p);
	
	return 0;
}
