#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=n;j>i;j--)
		{
			cout<<" ";
		}
			for(k=1;k<=i;)
			{
				cout<<"* ";
			}
	
	cout<<endl;
	}
	for(i=1;i<=(n-1);i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<" ";
		}
			for(k=(n-1);k>=i;k--)
			{
				cout<<"* ";
			}
	cout<<endl;
	}
	return 0;
}
