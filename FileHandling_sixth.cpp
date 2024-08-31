#include<iostream>
#include<fstream>
using namespace std;
void student_write(int count)
{
	char name[30];
	int i,marks;
	ofstream fout;
	fout.open("student1.txt",ios::app);
	if(!fout)
	{
		cout<<endl<<"Error: student1.txt can not be opened in write mode";
		return;
	}
	for(i=0;i<count;i++)
	{
		cout<<endl<<"Enter name:";
		cin>>name;
		cout<<endl<<"Enter marks";
		cin>>marks;
		fout<<name<<endl;
		fout<<marks<<endl;
	}
	fout.close();
}
void student_read()
{
	char name[30];
	int i,marks;
	ifstream fin;
	fin.open("student1.txt");
	if(!fin)
	{
		cout<<endl<<"Error opening file";
		return;
	}
	while(1)
	{
		fin>>name;
		fin>>marks;
		if(fin.eof())
			break;
		cout<<endl<<"name="<<name;
		cout<<endl<<"Marks secured:"<<marks;
	}
	fin.close();
}
int main()
{
	int count;
	cout<<endl<<"How many student detail do you want?";
	cin>>count;
	cout<<endl<<"Enter student detail to be store";
	student_write(count);
	cout<<endl<<"student detail from the file";
	student_read();
	return 0;
	
}

