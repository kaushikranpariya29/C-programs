#include<iostream>
using namespace std;
int main()
{
    int a[10] = {11,12,13,14,15,16,17,18,19,20};
    int place,number;
    cout<<"enter the position : "<<endl;
    cin>>place;
    cout<<"enter the number : "<<endl;
    cin>>number;
    for(int i=0;i<10;i++)
	{
        if(place-1==i)
		{
            a[i]=number;
        }
    }
    for(int i=0;i<10;i++)
	{
        cout<<a[i]<<endl;
    }
}
