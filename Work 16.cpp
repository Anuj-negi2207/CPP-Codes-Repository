#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream fin;
	fin.open("Book2.csv", ios::in);
	
	float k;
	fin>> k;
	cout<< k<< ", ";
	
}
