//Multiply matrices
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
		A operator *(A &x)
		{
			int i,j,k,temp;
			A o;
			if(n==x.m)
			{
				for(i=0;i<m;i++)
				{
					for(j=0;j<x.n;j++)
					{
						for(k=0;k<n;k++)
						temp=temp+(a[i][k]*x.a[k][j]);
						o.a[i][j]=temp;
						temp=0;
					}
				}
			}
			else
			{
				cout<<"Invalid multiplication"<<endl;
				exit(-1);
			}
			return o;
		}
};
int main()
{
	A ob1,ob2,ob3;
	ob1.getdata();
	ob2.getdata();
	ob3=ob1*ob2;
	int i,j,r1,c1;
	r1=ob1.m;
	c1=ob2.n;
	cout<<"matrix:"<<"\n";
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		cout<<ob3.a[i][j]<<" ";
		cout<<"\n";
	}
}


