#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter characters enter ^z to stop";
	ofstream fout("key.txt");
	while(cin)
	{
		cin.get(ch);
		fout<<ch;
	}
	fout.close();
	return 0;
}
