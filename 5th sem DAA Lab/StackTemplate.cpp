//Stack Using template

#include <bits/stdc++.h>
using namespace std;

void print(stack<int> s)
{
	while(!s.empty())
	{
		cout<<" "<<s.top();
		s.pop();
	}
	cout<<"\n";
}

int main ()
{
	stack<int> s;
	s.push(187);
	s.push(76);
	s.push(120);
	s.push(59);
	s.push(-11);
	s.push(0);
	s.push(56);

	cout<<"Original stack is: ";
	print(s);

	cout<<"Stack size: "<<s.size()<<"\n";
	cout<<"Top element: "<<s.top()<<"\n";

	cout<<"After popping : ";
	s.pop();
	print(s);

	return 0;
}
