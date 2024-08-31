#include<iostream>
using namespace std;
int main()
{
    int a[10] = {11,12,13,14,15,16,17,18,19,20};
    int place;
    cout<<"enter the position : "<<endl;
    cin>>place;
    for(int i=0;i<10;i++)
	{
        if(i>place-1)
		{
            a[i]=a[i+1];
        }
        if(i==9)
		{
            a[i]=0;
        }
    }
    for(int i=0;i<10;i++)
	{
        cout<<a[i]<<endl;
    }
}
