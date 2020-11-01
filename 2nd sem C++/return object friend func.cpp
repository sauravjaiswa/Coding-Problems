//Return an Object using non member or friend function
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
	friend ComplexObject add(ComplexObject A,ComplexObject B);
	public:
		void display()
		{
			cout<<"Final value is:"<<r<<"+i"<<i<<endl;
		}
};
	ComplexObject add(ComplexObject A,ComplexObject B)
	{
		ComplexObject o;
		o.r=A.r+B.r;
		o.i=A.i+B.i;
		return o;
	}
int main()
{
	ComplexObject o1,o2,o3;
	o1.getdata();
	o2.getdata();
	o3=add(o1,o2);
	o3.display();
}


