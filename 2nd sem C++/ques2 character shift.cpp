//nalayak-obmbzbp
#include<iostream>
#include<string.h>
using namespace std;
class characters
{
	char s[200],ns[200];
	public:
		void getdata()
		{
			cout<<"Enter a string:"<<endl;
			gets(s);
		}
	public:
		void edit()
		{
			int i,l;
			char ch;
			l=strlen(s);
			for(i=0;i<l;i++)
			{
				ch=s[i];
				if((int)ch==90||(int)ch==122)
				ns[i]=(char)((int)ch-25);
				else
				ns[i]=(char)((int)ch+1);
			}
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
	characters ob;
	ob.getdata();
	ob.edit();
	ob.display();
}


