#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> a;
	for(int i=0;i<90;i++)
	{
		a.push_back(i+1);
	}
	
cout<<"value at 0: "<<a.at(0)<<endl;
cout<<"Size: "<<a.size()<<endl;
cout<<"Capacity: "<<a.capacity()<<endl;

cout<<"objects: "<<endl;

for(int k=0;k<a.size();k++)
cout<<a.at(k)<<"\t";
}
