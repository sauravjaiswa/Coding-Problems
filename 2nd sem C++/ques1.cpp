//question 1
#include<iostream>
#include<math.h>
using namespace std;
class num
{
	public:
		int n;
	public:
	virtual void shownum(int N)=0;	//Pure virtual function
};
class hexi:public num
{
	public:
	int i=0,j,temp;
	char a[100];
	public:
	void shownum(int N)
	{
		while(N!=0) 
    	{     
        	temp=0; 
            temp=N%16; 
            if(temp<10) 
        	{ 
            	a[i] =temp+48; 
            	i++; 
        	} 
        	else
        	{ 
            	a[i]=temp+55; 
            	i++; 
        	} 
            N=N/16; 
    }
    cout<<"hexadecimal:";
    for(j=i-1;j>=0;j--) 
        cout<<a[j];
        cout<<endl;
	}
};
class octa:public num
{
	public:
	int i=0,j,temp;
	int a[100];
	void shownum(int N)
	{
		while(N!=0) 
    	{     
        	temp=0; 
            temp=N%8;
            a[i]=temp; 
            	i++; 
            N=N/8; 
           }
    cout<<"Octal:";
    for(j=i-1;j>=0;j--) 
        cout<<a[j];
        cout<<endl;
    }
};
int main()
{
	int N;
	cout<<"Enter a number:"<<endl;
	cin>>N;
	num *ptr;
	hexi ob1;
	octa ob2;
	ptr=&ob1;
	ptr->shownum(N);
	ptr=&ob2;
	ptr->shownum(N);
}
