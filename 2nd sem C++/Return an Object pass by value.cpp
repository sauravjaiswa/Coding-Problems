//Return an Object pass by value
#include<iostream>
using namespace std;
class ComplexObject
{
	int r,i;
	public:
		void getdata()
		{
			cout<<"Enter real part:"<<endl;
			cin>>r;
			cout<<"Enter imaginary part:"<<endl;
			cin>>i;
		}
	public:
	ComplexObject add(ComplexObject A)
	{
		ComplexObject o;
		o.r=A.r+r;
		o.i=A.i+i;
		return o;
	}
	public:
		void display()
		{
			cout<<"Final value is:"<<r<<"+i"<<i<<endl;
		}
};
int main()
{
	ComplexObject o1,o2,o3;
	o1.getdata();
	o2.getdata();
	o3=o2.add(o1);
	o3.display();
}


