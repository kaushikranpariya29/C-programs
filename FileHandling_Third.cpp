#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
	char ch;
	char filename[50];
	cout<<endl<<"Enter file name to open";
	cin>>filename;
	//ifstream fin("employee.txt"); //file does not exist
	//ifstream fin("student.txt"); //provide direct name
	ifstream fin(filename);
	if(!fin)
	{
		cout<<endl<<"error opening file";
		return 1;
	}
	fin>>resetiosflags(ios::skipws); //do not skip space or new line
	while(fin) //while end of file not reached
	{
		fin>>ch;
		cout<<ch;
	}
}
