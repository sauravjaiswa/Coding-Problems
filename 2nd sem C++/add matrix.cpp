//Sum two matrix
#include<iostream>
using namespace std;
class A
{
	public:
	int a[20][20],m,n;
	public:
		void getdata()
		{
			int i,j;
			cout<<"Enter row and column:"<<endl;
			cin>>m>>n;
			cout<<"Enter values in matrix:"<<endl;
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				cin>>a[i][j];
			}
		}
		A operator +(A &x)
		{
			int i,j;
			A o;
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				o.a[i][j]=a[i][j]+x.a[i][j];
			}
			return o;
		}
};
int main()
{
	A ob1,ob2,ob3;
	ob1.getdata();
	ob2.getdata();
	ob3=ob1+ob2;
	int i,j,r,c;
	r=ob1.m;
	c=ob1.n;
	cout<<"matrix:"<<"\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		cout<<ob3.a[i][j]<<" ";
		cout<<"\n";
	}
}


