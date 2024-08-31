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
		bool operator ==(Index idx)
		{
			if(value==idx.value)
				return true;
			else
				return false;
		}
};
int main()
{
	Index i1(11);
	Index i2(110);
	if(i1==i2)
		cout<<endl<<"I1 is same as i2";
	else
		cout<<endl<<"Both are different";
		
	return 0;
}
