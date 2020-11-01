//Overload <<,>>
#include<iostream>
using namespace std;
class A
{
	public:
	string name;
	int age;
	public:
		A()
		{
			name="bdhbd";
			age=0;
		}
		friend ostream& operator<<(A &n,ostream &out);
		friend istream& operator>>(A &n,istream &in);
};
ostream& operator<<( A &n,ostream &out)
{
	out<<"name"<<endl<<n.name<<endl<<"age"<<endl<<n.age;
	return out;
}
istream& operator>>(A &n,istream &in)
{
	in>>n.name>>n.age;
	return in;
}
int main()
{
	cout<<"Name and age:"<<endl;
	A ob;
	ob>>cin;
	ob<<cout;
}


