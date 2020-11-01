//Stack with arrays
#include<bits/stdc++.h>
using namespace std;

#define MAX 100000
class Stack
{
	public:
		int top,a[MAX];
	public:
		stack()
		{
			top=-1;
		}
		
		void push(int x)
		{
			if(top>=MAX-1)
			cout<<"Stack Overflow\n";
			else
			{
				a[++top]=x;
				cout<<x<<" pushed into the stack\n";	
			}
		}
		
		int pop()
		{
			if(top<0)
			{
				cout<<"Stack Underflow\n";
				return 0;	
			}
			else
			{
				int x=a[top];
				a[top--]=-1;
				cout<<x<<" popped out of stack\n";
				return x;
			}
		}
		
		int peek()
		{
			if(top<0) 
			{ 
		        cout<<"Stack is Empty"; 
		        return 0; 
		    } 
		    else 
			{ 
		        int x=a[top]; 
		        return x; 
		    } 
		}
};


int main()
{
	int ch,x;
	Stack s;
	do
	{
		cout<<"1)Push\n2)Pop\n3)Peek\n";
		cout<<"Enter choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter value to be pushed:";
				cin>>x;
				s.push(x);
				break;
				case 2:
					s.pop();
					break;
					case 3:
						cout<<s.peek()<<" peeked out of stack";
						break;
						default:
							cout<<"Invalid choice!!\n";
		}
	}while(ch>=1&&ch<=3);
}
