//Infix to Postfix
#include<bits/stdc++.h>
using namespace std;
class Stack
{
	public:
	char data;
	Stack *next;
	Stack(char data)
	{
		this->data=data;
		this->next=NULL;
	}
};
Stack *top=NULL;
Stack *temp=NULL;

void push(char c)
{
	Stack *newnode;
	newnode=new Stack(c);
	if(top==NULL)
	{
		top=newnode;
		newnode->next=NULL;
	}
	else
	{
		newnode->next=top;
		top=newnode;
	}
}

char pop()
{
	char x;
	if(top==NULL)
	cout<<"Stack Underflow\n";
	else
	{
		x=top->data;
		temp=top;
		top=top->next;
		delete(temp);
		return x;
	}
	
}

int priority(char c) 
{ 
    if(c=='^') 
    return 3; 
    else if(c=='*'||c=='/') 
    return 2; 
    else if(c=='+'||c=='-') 
    return 1; 
    else
    return -1;
} 

int main()
{
	string exp,ns;
	char x;
	int i,flag=1,l;
	cout<<"Enter expression:";
	cin>>exp;
	l=exp.length();
	for(i=0;i<l;i++)
	{
		if((exp[i]>='A'&&exp[i]<='Z')||(exp[i]>='a'&&exp[i]<='z'))
		ns=ns+exp[i];
		else if(exp[i]=='(')
		push(exp[i]);
		else if(exp[i]==')')
		{
			while(top!=NULL&&top->data!='(')
			{
				x=pop();
				ns=ns+x;
			}
			if(top->data=='(')
			x=pop();
		}
		else
		{ 
            while(top!=NULL&&priority(exp[i])<=priority(top->data)) 
            { 
                x=pop(); 
                ns=ns+x; 
            } 
			push(exp[i]);
		}
	}
	while(top!=NULL)
	{
		x=pop();
		ns=ns+x;
	}
	cout<<"Postfix:";
	cout<<ns<<"\n";
}
