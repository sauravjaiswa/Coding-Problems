//reverse of a number
#include<iostream>
using namespace std;
class reverse
{
	int num;
	public:
		void input()
		{
			cout<<"Enter number:"<<endl;
			cin>>num;
		}
	public:
		void rev()
		{
			int copy,d,r=0;
			copy=num;
			while(copy!=0)
			{
				d=copy%10;
				r=(r*10)+d;
				copy=copy/10;
			}
			cout<<"reversed number: "<<r<<endl;
		}
};
		
	int main()
	{
		reverse ob;
		ob.input();
		ob.rev();
	}

