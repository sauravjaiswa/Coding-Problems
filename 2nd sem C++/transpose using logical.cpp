//Transpose matrix usin logical !
#include<iostream>
using namespace std;
class A
{
	public:
	int a[20][20],b[20][20],r,c,i,j;
	public:
		A()
		{
		}
		A(int m,int n)
		{
			r=m;
			c=n;
		}
		void getdata()
		{
			cout<<"Enter values in matrix:"<<endl;
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				cin>>a[i][j];
			}
		}
		void display()
		{
			cout<<"matrix:"<<endl;
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				cout<<a[i][j];
				cout<<endl;
			}
		}
		A operator !()
		{
			int i,j;
			A o(c,r);
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				o.a[i][j]=a[j][i];
			}
			return o;
		}
		void display1()
		{
			cout<<"Transpose matrix:"<<endl;
			for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				cout<<a[i][j];
				cout<<endl;
			}
		}
};
int main()
{
	int m,n;
	cout<<"Enter row and column:"<<endl;
	cin>>m>>n;
	A ob1(m,n),o;
	ob1.getdata();
	ob1.display();
	o=!ob1;
	o.display1();
}


