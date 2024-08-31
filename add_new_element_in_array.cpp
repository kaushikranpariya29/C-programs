#include<iostream>
using namespace std;
int main()
{
    int a[10] = {11,12,13,14,15,16,17,18,19,20};
    int old_num,new_num;
    cout<<"enter the old number : "<<endl;
    cin>>old_num;
    cout<<"enter the new number : "<<endl;
    cin>>new_num;
    int i=0;
    while(i<=11){
        if(old_num==a[i])
		{
            a[i]=new_num;
            for(int i=0;i<10;i++)
			{
                cout<<a[i]<<endl;
            }
            break;
        }
        if(i>10)
		{
            cout<<"element is not in array ";
            break;
        }
        i++;
    }
}
