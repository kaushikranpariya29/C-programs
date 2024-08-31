#include<iostream>
using namespace std;
int main()
{
    int num=10,sum=0;
    float avg=0.0;
    int a[num];
    cout<<"enter the element of array:"<<endl;
    for(int i=0;i<num;i++)
	{
        cin>>a[i];
    }
    for(int i=0;i<num;i++)
	{
        sum=sum+a[i];
    }
    avg = sum/num;
    cout<<"sum of the array is = "<<sum;
    cout<<"average of the array is = "<<avg;
}
