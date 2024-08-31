#include<iostream>
using namespace std;
void commission(char a)
{
    if(a=='P' || a=='p'){
        cout<<"commission of salesman = 1000";
    }
    else if(a=='D' || a=='d'){
        cout<<"commission of salesman = 2000";
    }
    else if(a=='W' || a=='w'){
        cout<<"commission of salesman = 5000";
    }
    else{
        cout<<"no commission for selasman ";
    }
}
int main()
{
    int sn,sa;
    char sy;
    cout<<"enetr salesman number = ";
    cin>>sn;
    cout<<"enetr sales amount = ";
    cin>>sa;
    cout<<"enetr salesman type <P/D/W> = ";
    cin>>sy;
    cout<<"---------commission----------\n";
    commission(sy);
}