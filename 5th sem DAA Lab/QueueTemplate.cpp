// Queue Using template

#include <bits/stdc++.h>

using namespace std;

void print(queue<int> qq)
{
    queue<int> q=qq;
	while(!q.empty())
	{
		cout<<" "<<q.front();
		q.pop();
	}
	cout<<"\n";
}

// Driver Code
int main()
{
	queue <int> q;
	q.push(18);
	q.push(73);
	q.push(23);
	q.push(90);
	q.push(-3);

	cout<<"Original Queue : ";
	print(q);

	cout<<"Size of queue: "<<q.size()<<"\n";
	cout<<"Front of queue: "<<q.front()<<"\n";
	cout<<"Rear of queue: "<<q.back()<<"\n";

	cout<<"After popping: ";
	q.pop();
	print(q);

	return 0;
}
