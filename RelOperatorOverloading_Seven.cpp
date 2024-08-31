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
		Index(int x)
		{
			value=x;
		}
		int getIndex()
		{
			return value;
		}
		bool operator <(Index idx)
		{
			if(value<idx.value)
				return true;
			else
				return false;
		}
};
int main()
{
	Index i1(560);
	Index i2(110);
	if(i1<i2)
		cout<<endl<<"I1 is less than i2";
	else
		cout<<endl<<"I2 is less than i1";
		
	return 0;
}
