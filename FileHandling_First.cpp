#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char name[30];
	int marks;
	ofstream fout("student.txt");
	cout<<endl<<"Enter first student detail";
	cout<<endl<<"Enter name";
	cin>>name;
	cout<<endl<<"Enter marks";
	cin>>marks;
	fout<<name<<endl;
	fout<<marks<<endl;
	cout<<endl<<"Enter second student detail";
	cout<<endl<<"Enter name";
	cin>>name;
	cout<<endl<<"Enter marks";
	cin>>marks;
	fout<<name<<endl;
	fout<<marks<<endl;
	return 0;
}
