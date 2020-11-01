//Object as an argument pass by value
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
	void add(ComplexObject A,ComplexObject B)
	{
		int fr,fi;
		fr=A.r+B.r;
		fi=A.i+B.i;
		cout<<"Final value is:"<<fr<<"+i"<<fi<<endl;
	}
};
int main()
{
	ComplexObject o1,o2,o3;
	o1.getdata();
	o2.getdata();
	o3.add(o1,o2);
}


