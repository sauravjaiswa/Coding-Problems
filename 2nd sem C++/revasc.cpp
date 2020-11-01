#include<iostream>
using namespace std;
class revasc
{
	public:
		int *ptr,i,j,l;
		void read()
		{
			cout<<"Enter length:"<<endl;
			cin>>l;
			ptr=new int[l];
			cout<<"Enter values in array:"<<endl;
			for(i=0;i<l;i++)
			cin>>*(ptr+i);
		}
		int reverse(int n)
		{
			int d;
			int copy=n;
			int rev=0;
			while(copy!=0)
			{
				d=copy%10;
				rev=(rev*10)+d;
				copy=copy/10;
			}
			return rev;
		}
		void sort()
		{
			int t;
			for(i=0;i<l;i++)
			*(ptr+i)=reverse(*(ptr+i));
			for(i=0;i<l-1;i++)
			{
				for(j=0;j<l-i-1;j++)
				{
					if(*(ptr+j)>*(ptr+j+1))
					{
						t=*(ptr+j);
						*(ptr+j)=*(ptr+j+1);
						*(ptr+j+1)=t;
					}
				}
			}
			for(i=0;i<l;i++)
			cout<<*(ptr+i)<<endl;
		}
};
int main()
{
	revasc o;
	o.read();
	o.sort();
}
