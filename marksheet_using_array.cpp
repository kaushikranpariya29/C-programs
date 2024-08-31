#include<iostream>
using namespace std;
int main()
{
    int marks[5];
    int sum=0;
    float per=0.0;
    string clas;
    cout<<"enter marks of five subject : ";
    for(int i=0;i<5;i++)
	{
        cin>>marks[i];
        sum=sum+marks[i];
    }
    per = (sum*100)/500;
    if(per>90)
	{
        clas = "Distinction";
    }
    else if(per>80)
	{
        clas = "first";
    }
    else if(per>70)
	{
        clas = "second";
    }
    else if(per>60)
	{
        clas = "pass";
    }
    else 
	{
        clas = "fail";
    }
    cout<<"total of student marks is = "<<sum<<endl;
    cout<<"percentage of student is = "<<per<<endl;
    cout<<"clas of student is = "<<clas<<endl;
}
