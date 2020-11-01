//friend 3
#include<iostream>
using namespace std;
class abc;
class xyz
{
	int a,b;
	public:
		void getdata()
		{
			cout<<"Enter a,b:"<<endl;
			cin>>a>>b;
		}
		friend int complex(xyz,abc);  //friend function to access member func and data members inside class
};
class abc
{
	int a,b;
	public:
		void getdata()
		{
			cout<<"Enter a,b:"<<endl;
			cin>>a>>b;
		}
		friend int complex(xyz,abc);  //friend function to access member func and data members inside class
};
int complex(xyz A,abc B)
{
	int max1,max2;
	max1=A.a>A.b?A.a:A.b;
	max2=B.a>B.b?B.a:B.b;
	if(max1>max2)
	return max1;
	else
	return max2;
}
int main()
{
	xyz ob1;abc ob2;
	ob1.getdata();
	ob2.getdata();
	cout<<complex(ob1,ob2);
}


