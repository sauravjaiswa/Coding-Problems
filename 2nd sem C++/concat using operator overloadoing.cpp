//Concatenate two string using operator overloading
#include<iostream>
#include<cstring>
using namespace std;
class A
{
	public:
	string s;
	public:
		void getdata()
		{
			cout<<"Enter string:"<<endl;
			getline(cin,s);
		}
		A operator +(A &x)
		{
			A o;
			o.s=s+x.s;
			return o;			
		}
	/*	void display()
		{
			cout<<"Concatenated string="<<endl;
			puts(s);
		}*/
};
int main()
{
	A ob1,ob2,ob3;
	ob1.getdata();
	ob2.getdata();
	ob3=ob1+ob2;
	cout<<"Concatenated string=";
	cout<<ob3.s;
}


