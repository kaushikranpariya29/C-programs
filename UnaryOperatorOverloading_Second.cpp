#include<iostream>
using namespace std;
class Index
{
	int value;
	public:
		Index()
		{
			value=0;
		}
		int getindex()
		{
			return value;
		}
		void operator ++()
		{
			value=value+1;
		}
	
};
int main()
{
	Index i,i1;
	++i;
	++i;
	++i;
	cout<<endl<<i.getindex();	

}
