
#include<iostream>
#include <vector>
using namespace std;
int main()
{
	int i,s,e,n,c=0;
	char t;
	cout<<"Enter size:\n";
	cin>>n;
	vector <char> v(n);
	vector <char>:: iterator itr1;
	vector <char>:: iterator itr2;
	
	cout<<"Enter elements in vector:\n";
	for(itr1 = v.begin();itr1!=v.end();itr1++)
	{
		cin >> *itr1;
		c++;
	}
		
	//Bubble sort
	for(itr1=v.begin();itr1!=(v.end()-1);itr1++)
	{
		for(itr2=v.begin();itr2!=(v.end()-(itr1-v.begin())-1);itr2++)
		{
			if(*itr2>*(itr2+1))
			{
				t=*itr2;
				*itr2=*(itr2+1);
				*(itr2+1)=t;
			}
		}
	}
	
	cout<<"Sorted array:\n";
	for(itr1=v.begin();itr1!=v.end();itr1++)
	cout<<*itr1<<" ";
	cout<<"\n";
}
