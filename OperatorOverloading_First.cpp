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
		void nextindex()
		{
			value=value+1;
		}
	
};
int main()
{
	Index i;
	i.nextindex();
	i.nextindex();
	i.nextindex();
	i.nextindex();
	cout<<endl<<i.getindex();	
}
