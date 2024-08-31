#include<iostream>
using namespace std;
int main()
{
    int s;
    int num[5];
    cout<<"enter the five element of array : "<<endl;
    for(int i=0;i<5;i++)
	{
        cin>>i[num];
    }
    for(int i=0;i<5;i++)
	{
        for(int j=0;j<5;j++)
		{
            if(num[j]>num[j+1])
			{
                int a = num[j];
                num[j]=num[j+1];
                num[j+1]=a;
            }
        }
    }
    s =sizeof(num)/sizeof(num[0]);
    cout<<"second largest number of array is = "<<num[s-1]<<endl;
}
