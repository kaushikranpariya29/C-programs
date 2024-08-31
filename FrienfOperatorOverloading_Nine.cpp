#include<iostream>
using namespace std;
class Index
{
	int value;
	public:
		Index()
		{
			value=10;
		}
		int getindex()
		{
			return value;
		}
		friend void operator -(Index& i)
		{
			i.value=-(i.value);
		}
};
int main()
{
	Index i,i1;
	-i;
	cout<<endl<<i.getindex();	
}
