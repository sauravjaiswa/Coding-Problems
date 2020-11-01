//friend 2
#include<iostream>
using namespace std;
class abc;
class xyz
{
	int a,b,c;
	public:
		void getdata()
		{
			cout<<"Enter real part of a,b,c:"<<endl;
			cin>>a>>b>>c;
		}
		friend int complex(xyz,abc);  //friend function to access member func and data members inside class
};
class abc
{
	int a,b,c;
	public:
		void getdata()
		{
			cout<<"Enter imaginary part of a,b,c:"<<endl;
			cin>>a>>b>>c;
		}
		friend int complex(xyz,abc);  //friend function to access member func and data members inside class
};
int complex(xyz A,abc B)
{
	int sum,isum;
	sum=A.a+A.b+A.c;
	isum=B.a+B.b+B.c;
	cout<<"Result:"<<endl;
	cout<<sum<<"+i"<<isum<<endl;
}
int main()
{
	xyz ob1;
	abc ob2;
	ob1.getdata();
	ob2.getdata();
	complex(ob1,ob2);
}
