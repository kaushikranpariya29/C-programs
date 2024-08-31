#include<iostream>
using namespace std;
int main()
{
	int i,n,j,tmp;
	cout<<"Enter any value :";
	cin>>n;
	tmp=n;
	for(j=1;j<=n;j++)
	{
		for(i=1;i<=tmp;i++)
		{	
			cout<<"*";
		}
		tmp=tmp-1;
		cout<<endl;
	}
	return 0;
}	
