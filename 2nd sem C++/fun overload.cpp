//Function overloading
#include<iostream>
#include<string> 
using namespace std;
class A
{
	public:
		int add(int a,int b)
		{
			return (a+b);
		}
	public:
		string add(string a,string b)
		{
			return (a+b);
		}
};
int main()
{
	A ob;
	int add1=ob.add(10,20);
	string add2=ob.add("saurav", " jaiswal");
	cout<<"Addition of integers:"<<add1<<endl;
	cout<<"Addition of strings:"<<add2<<endl;
}

