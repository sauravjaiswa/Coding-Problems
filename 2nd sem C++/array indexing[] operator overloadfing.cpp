//Using () for operator overloading
#include<iostream>
using namespace std;
class A
{
	public:
	int a[10];
	public:
		void datain(int index,int value)
		{
			a[index]=value;
		}
		int operator [](int index)
		{
			return (a[index]);
		}
};
int main()
{
	A ob1;
	int i;
	for(i=0;i<10;i++)
	{
		ob1.datain(i,(i+1)*10);
		
	}
	for(i=0;i<10;i++)
	cout<<ob1.a[i]<<" ";
}


