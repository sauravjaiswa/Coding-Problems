//Parenthesis Checker
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

int main()
{
	string exp;
	char x;
	int i,flag=1;
	cout<<"Enter expression:";
	cin>>exp;
	for(i=0;i<exp.length();i++)
	{
		if(exp[i]=='('||exp[i]=='{'||exp[i]=='[')
		{
			push(exp[i]);
			continue;	
		}
		if(top==NULL)
		{
			flag=0;
			break;
		}
		switch (exp[i]) 
        { 
        case ')': 
            x = pop(); 
            if (x=='{' || x=='[') 
                flag=0; 
            break; 
  
        case '}':
            x = pop(); 
            if (x=='(' || x=='[') 
                flag=0; 
            break; 
  
        case ']': 
            x = pop(); 
            if (x =='(' || x == '{') 
                flag=0; 
            break; 
        } 
	}
	if(top!=NULL)
	flag=0;
	if(flag==1)
	cout<<"Valid Expression!!\n";
	else
	cout<<"Invalid Expression!!\n";
}
