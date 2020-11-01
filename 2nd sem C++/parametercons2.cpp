//calling default and parameterised constructor in one line
#include<iostream>
using namespace std;
class Dual
{
	int a;
	public:
		Dual(int x=0)
		{
			a=x;
			cout<<a<<endl;
		}
};
int main()
{
	Dual o1;
	Dual o2(10);
}
