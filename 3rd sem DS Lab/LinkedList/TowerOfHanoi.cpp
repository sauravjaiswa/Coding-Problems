//Tower of Hanoi
#include<bits/stdc++.h>
using namespace std;

void move(int n,char source,char destination,char spare)
{
	if(n==1)
	cout<<"Move from "<<source<<" to "<<destination<<"\n";
	else
	{
		move(n-1,source,spare,destination);
		move(1,source,destination,spare);
		move(n-1,spare,destination,source);	
	}
}

int main()
{
	int n;
	cout<<"Enter number of rings:";
	cin>>n;
	move(n,'A','C','B');
}
