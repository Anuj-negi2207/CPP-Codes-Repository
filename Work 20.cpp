//calc GPA

#include<iostream>
using namespace std;

class Student
{
	private:
	float studentid;
	float credit_earned;
	int point_earned;
	double gpa;
	
	public:
		Student()
		{
		  studentid=001;
		  credit_earned=2;
		  point_earned=10;
		}
		
		Student(int id, int ce, int pe)
		{
			studentid=id;
			credit_earned=ce;
			point_earned=pe;
		}
		
	
		
		void display()
		{
			cout<<"Student's ID= "<<studentid<<endl;
			cout<<"Credit Earned= "<<credit_earned<<endl;
			cout<<"Point Earned= "<<point_earned<<endl;
			cout<<"So, GPA= "<<gpa<<endl;
		}
		
		
		double GPA()
        {
	    gpa=(point_earned/credit_earned);
        }
		
		
};



int main()
{
	Student s1,s2(1001, 3, 28),s3(1002, 5, 44);
	
	s1.GPA();
	s2.GPA();
	s3.GPA();
	
	
	s1.display();
	cout<<endl;
	s2.display();
	cout<<endl;
	s3.display();
	cout<<endl;
	
	return 0;
}


