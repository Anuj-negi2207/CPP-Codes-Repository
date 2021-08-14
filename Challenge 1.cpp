#include<iostream>
using namespace std;

class Member
{
	public:
		char name[20], Address[50];
		int age;
		long int Phone_number;
	
		void printSalary()
		{
			cout<<"SALARY";
		}
};

class Employee:public Member
{	
	public:
		char specialization[20];
		
		void Getdata_E()
		{
			cout<<"\nEnter the Name of the Employee: ";
			cin>>name;
			
			cout<<"Age:\t";
			cin>>age;
			
			cout<<"Address:\t";
			cin>>Address;
			
			cout<<"Phone Number:\t";
			cin>>Phone_number;	
			
			cout<<"Specialization:\t";
			cin>>specialization;
			
		}
		
		void Printdata_E()
		{
			cout<<"\nEmployee name:\t "<<name;
			cout<<"\nAge:\t\t "<<age;
			cout<<"\nAddress:\t "<<Address;
			cout<<"\nPhone Number:\t "<<Phone_number;
			cout<<"\nSpecialization:\t "<<specialization;	
		}
};

class Manager:public Member
{
		public:
		char department[20];
		
		void Getdata_M()
		{
			cout<<"\nEnter the Name of the Manager: ";
			cin>>name;
			
			cout<<"Age:\t";
			cin>>age;
			
			cout<<"Address:\t";
			cin>>Address;
			
			cout<<"Phone Number:\t";
			cin>>Phone_number;	
			
			cout<<"Department:\t";
			cin>>department;
		}
		
		void Printdata_M()
		{
			cout<<"\nManager name:\t "<<name;
			cout<<"\nAge:\t\t "<<age;
			cout<<"\nAddress:\t "<<Address;
			cout<<"\nPhone Number:\t "<<Phone_number;
			cout<<"\nDepartment:\t "<<department;	
		}
};

int main()
{
	Employee e;
	Manager m;
	
	e.Getdata_E();
		
	m.Getdata_M();
	
	e.Printdata_E();
	
	m.Printdata_M();
}
