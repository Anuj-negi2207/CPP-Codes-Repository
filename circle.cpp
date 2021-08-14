#include<iostream>

#define pi 3.1415
using namespace std;

class Circle
{
	private: 
		float radius;
		double circumference, area;
		
	public:
		Circle()
		{
		   radius=1.0;
		}
		
		Circle(const Circle &a)
		{
			radius=a.radius;
		}
		
		friend void changeRadius(Circle &a, float d)
		{
			a.radius=d;
		}
		
		void setRadius()
		{
		   cout<<"Enter the radius of the circle: ";
		   cin>>radius;
		}
		
		void calcDimensions()
		{
			area=pi*radius*radius;
			circumference=2*pi*radius;
		}
		
		void display()
		{
			cout<<"For the given Circle radius= "<<radius<<endl;
			cout<<"Circumference= "<<circumference<<endl;
			cout<<"Area= "<<area<<endl;
		}
		
};

int main()
{
	Circle c1;
	
	c1.setRadius();
	
	Circle c2(c1);
		
	c2.calcDimensions();
	
	cout<<"First circle: "<<endl;
	c1.display();
	cout<<endl<<"Second circle: "<<endl;
	c2.display();
	
	changeRadius(c1,6);
	c1.calcDimensions();
	
	changeRadius(c2,7);
	c2.calcDimensions();
	
	cout<<endl<<"After changing : \n";
	
	cout<<"First circle: "<<endl;
	c1.display();
	cout<<endl<<"Second circle: "<<endl;
	c2.display();
}
