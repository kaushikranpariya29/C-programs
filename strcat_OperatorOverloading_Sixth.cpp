#include<iostream>
#include<string.h>
using namespace std;
const int size = 50;
class string1
{
	char str[size];
	public:
	string1()
	{
		strcpy(str,"");
	}
	string1(char *str1)
	{
		strcpy(str,str1);
	}
	void display()
	{
		cout<<endl<<str;
	}
	string1 operator +(string1 s)
	{
		string1 temp;
		strcat(str,s.str);
		strcpy(temp.str,str);
		return temp;
	}
};
int  main()
{
	string1 str1("Welcome to");
	string1 str2("UTU");
	string1 str3;
	str1.display();
	str2.display();
	str3=str1+str2;
	str3.display();
}
