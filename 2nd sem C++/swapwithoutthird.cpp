#include<iostream>
using namespace std;
class A
{
	public:
		void swap(int *a,int *b)
		{
			cout<<"a="<<*a<<endl<<"b="<<*b<<endl;
			*a=*a+*b;
			*b=*a-*b;
			*a=*a-*b;
			cout<<"a="<<*a<<endl<<"b="<<*b<<endl;
		}
};
int main()
{
	A o;
	int a=10,b=89;
	o.swap(&a,&b);
}
