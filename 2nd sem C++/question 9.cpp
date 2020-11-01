//9.i)Program to understand the concept of new and delete operator.
#include<iostream>
using namespace std;
class dma1
{
	public:
		int *p,l;
		void input()
		{
			int i;
			cout<<"Enter length:"<<endl;
			cin>>l;
			p=new int[l];
			cout<<"Enter values in array:"<<endl;
			for(i=0;i<l;i++)
			cin>>*(p+i);
		}
		void sort()
		{
			int i,j;
			for(i=0;i<l-1;i++)
			{
				for(j=0;j<l-i-1;j++)
				{
					if(*(p+j)>*(p+j+1))
					{
						int t=*(p+j);
						*(p+j)=*(p+j+1);
						*(p+j+1)=t;
					}
				}
			}
		}
		void disp()
		{
			int i;
			for(i=0;i<l;i++)
			cout<<*(p+i);
		}
		void disp1()
		{
			int i;
			for(i=0;i<l;i++)
			cout<<*(p+i);
			delete[] p;
		}
};
int main()
{
	dma1 ob;
	ob.input();
	cout<<"Array:"<<endl;
	ob.disp();
	ob.sort();
	cout<<"Sorted Array:"<<endl;
	ob.disp1();
}
