//Infix to Postfix
#include<bits/stdc++.h>
using namespace std;

int priority(char ch)
{
	if(ch=='^')
	return 3;
	else if(ch=='*'||ch=='/')
	return 2;
	else if(ch=='+'||ch=='-')
	return 1;
	else
	return -1;
}

int main()
{
	string exp;
	cout<<"Enter expression:";
	cin>>exp;
	stack <char> s;
	vector<char> ns;
	int l=exp.length();
	int i;
	char ch;
	for(i=0;i<l;i++)
	{
		ch=exp[i];
		if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z'||ch>='0'&&ch<='9')
		ns.push_back(ch);
		else
		{
			if(s.empty())
			s.push(ch);
			else if(ch=='(')
			s.push(ch);
			else if(ch==')')
			{
				while(s.top()!='(')
				{
					ns.push_back(s.top());
					s.pop();
				}
				s.pop();
			}
			else
			{
				int prev=priority(s.top());
				int now=priority(ch);
				while(prev>=now)
				{
					ns.push_back(s.top());
					s.pop();
					prev=priority(s.top());
				}
				s.push(ch);
			}
		}
	}
	while(!s.empty())
	{
		ns.push_back(s.top());
		s.pop();
	}
	cout<<"Result:";
	vector <char> :: iterator *it;
	for(int i=0;i<(ns.end()-ns.begin());i++)
	cout<<ns[i];
}
