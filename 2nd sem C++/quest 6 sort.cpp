//sort array in ascending using exchange(int, int)
#include<iostream>
#include<string.h>
using namespace std;
class sort
{
	int a[500],l;
	public:
		void exchange(int *ar,int *len)
		{
			int i,j,t;
			for(i=0;i<*(len-1);i++)
			{
				for(j=0;j<*(len-i-1);j++)
				{
					if(*(ar+j)>*(ar+j+1))
					{
						t=*(ar+j);
						*(ar+j)=*(ar+j+1);
						*(ar+j+1)=t;
					}
				}
			}
				cout<<"New array:"<<endl;
				for(i=0;i<l;i++)
				cout<<*(a+i);
			}
};
int main()
{
	int i,l,a[500];
	cout<<"Enter length of array:"<<endl;
	cin>>l;
	cout<<"Enter elements in array:"<<endl;
	for(i=0;i<l;i++)
	cin>>a[i];
	sort ob;
	ob.exchange(&a,&l);
//	ob.display();
}


