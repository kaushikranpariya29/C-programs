#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter the size of array : "<<endl;
    cin>>size;
    int a[size];
    cout<<"enter the element of array : "<<endl;
    for(int i=0;i<size;i++)
	{
        cin>>a[i];
    }
    for(int i=0;i<size;i++)
	{
        cout<<a[i]<<endl;
    }
}
