#include<iostream>
using namespace std;
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int number;
    cout<<"enter the number : ";
    cin>>number;
    for(int i=0;i<10;i++)
	{
        if(number==a[i])
		{
            cout<<"position of number is = "<<i<<endl;
        }
        if(i>9)
		{
            cout<<"number is not in array"<<endl;
        }
    }
}
