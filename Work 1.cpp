#include<iostream>
using namespace std;


void grade(int a[5])

{		
	float d;
	d=0;	
	try
	{
		for(int i=0;i<5;i++)
		{
			if(a[i]<0)
			{
				throw a[i];
				break;
			}
			else if(a[i]>100)
			{
				throw a[i];
				break;
			}
			else
			d+=a[i];
		}
	}
		catch(int x)
		{
		cout<<"given value is "<<x<<" which is Not possible!"<<endl;
		}
		d/=5;
				
				if(d>=90)
				cout<<"grade A";
				
				else if(d>=80&&d<90)
				cout<<"grade B";
				
				else if(d>=70&&d<80)
				cout<<"grade C";
				
				else if(d>=60&&d<70)
				cout<<"grade D";
				
				else 
				cout<<"grade F";
}

int main()
{
	int a[5],i;
	float d=0;
	
	cout<<"Enter the marks in 5 subjects: ";
	for(i=0;i<5;i++)
		cin>>a[i];
		
	
	grade(a);
	
	return 0;
}
