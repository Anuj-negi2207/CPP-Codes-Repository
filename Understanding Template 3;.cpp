#include<iostream>
using namespace std;
template<class t>
float arraysum(t a[],int size)
{
	t sum=0;
	for(int i=0;i<size;i++)
	{
		sum=sum+a[i];
	}
	return sum;
}

int main()
{
	int x[]={10.9,20,30.5,40.1,50};
	int y[]={1.5,4.6,3.5};
	cout<<"Integer sum:"<<arraysum(x,5);
	cout<<"Float sum:"<<arraysum(y,3);
	return 0;
}

