#include<iostream>
using namespace std;
int main()
{
    int size,odd=0,even=0,zero=0,exnum=0;
    cout<<"enter the size of array : "<<endl;
    cin>>size;
    int num[size];
    cout<<"enter the element of array : "<<endl;
    for(int i=0;i<size;i++)
	{
        cin>>num[i];
    }
    for(int i=0;i<size;i++)
	{
        if(num[i]%2==0)
		{
            even++;
        }
        else if(num[i]%2!=0)
		{
            odd++;
        }
        else if(num[i]==0)
		{
            zero++;
        }
        else
		{
            exnum++;
        }
    }
    cout<<"odd number is = "<<odd<<endl;
    cout<<"even number is = "<<even<<endl;
    cout<<"zero number is = "<<zero<<endl;
}
