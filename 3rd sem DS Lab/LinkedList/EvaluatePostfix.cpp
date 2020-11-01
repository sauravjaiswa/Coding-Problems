//Evaluate Postfix
#include<bits/stdc++.h>
using namespace std;
class Stack
{
	public:
	float data;
	Stack *next;
	Stack(char data)
	{
		this->data=data;
		this->next=NULL;
	}
};
Stack *top=NULL;
Stack *temp=NULL;

void push(float c)
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
	float x;
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
	char op1,op2;
	float value=0.0;
	int i,flag=1,l;
	cout<<"Enter expression:";
	cin>>exp;
	while(exp[i]!='\0')
	{
		if(exp[i]>='0'&&exp[i]<='9')
		push((float)exp[i]);
		else
		{
			op2 = pop();
			op1 = pop();
			switch(exp[i])
			{
			case '+':
			value = op1 + op2;
			break;
			case '–':
			value = op1 - op2;
			break;
			case '/':
			value = op1 / op2;
			break;
			case '*':
			value = op1 * op2;
			break;
			case '%':
			value = (int)op1 % (int)op2;
			break;
			}
			push(value);	
		}
		i++;
	}
	cout<<pop();
}
