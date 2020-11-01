//to find address of given element given base address is 1000
#include<iostream>
using namespace std;
int main()
{
	int b,m,n,i,j,add,w,e1,e2;
	b=1000;
	m=n=4;
	w=4;
	int a[m][n];
	cout<<"Enter elements of matrix:"<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		cin>>a[i][j];
	}
	cout<<"Enter rows and columns whose address to be found:"<<endl;
	cin>>e1;
	cin>>e2;
//	for(i=1;i<=m;i++)
//	{
//		for(j=1;j<=n;j++)
//		{
//			if(e1==i&&e2==j)
//			add=b+(w*(n*(i-1)+(j-1)));
			add=b+(w*(n*(e1-1)+(e2-1)));  //adress calculation formula
//		}
//	}
	cout<<"Address of given element: "<<add<<endl;
}
		
