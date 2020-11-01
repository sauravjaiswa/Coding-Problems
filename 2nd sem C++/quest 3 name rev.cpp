//saurav jaiswal-jaiswal saurav
#include<iostream>
#include<string.h>
using namespace std;
class characters
{
	char s[200],ns[200];
	public:
		characters(char tmp[])
		{
			int i;
			for(i=0;i<strlen(tmp);i++)
			s[i]=tmp[i];
		}
	public:
		void edit()
		{
			int i,l,e,j,x=-1;
			l=strlen(s);
			e=l;
			for(i=l-1;i>=0;i--)
			{
				if(i==0||s[i]==' ')
				{
					ns[x++]=' ';
					for(j=(i==0?i:i+1);j<e;j++)
					ns[x++]=s[j];
					e=i;
				}
				
			}
			ns[x-1]='\0';
		}
		public:
			void display()
			{
				cout<<"New String:"<<endl;
				puts(ns);
			}
};
int main()
{
	char str[200];
	cout<<"Enter a name:"<<endl;
	gets(str);
	characters ob1(str);
	ob1.edit();
	ob1.display();
}
