#include<iostream>
using namespace std;
int main()
{
	int **p=new int *[3];
	int c[3];
	for(int i=0;i<3;i++)
	{
		
		cin>>c[i];
		*(p+i)=new int [c[i]];
		for(int j=0;j<c[i];j++)
		cin>>p[i][j];
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<c[i];j++)
		cout<<p[i][j];
	}
}
