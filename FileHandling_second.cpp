#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char name[30];
	int marks;
	ifstream fin("student.txt");
	//Read first student
	fin>>name;
	fin>>marks;
	cout<<endl<<name;
	cout<<endl<<marks;

	fin>>name;
	fin>>marks;
	cout<<endl<<name;
	cout<<endl<<marks;
	return 0;	
}
