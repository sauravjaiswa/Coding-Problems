#include<iostream>
#include<string.h>
using namespace std;
class name
{
	public:
		int l;
		char *s;
		name()
		{
			l=0;
		}
		name(char *p)
		{
			l=strlen(p);
			s=new char[l+1];
			strcpy(s,p);
		}
		name operator +(name &o)
		{
			name tmp;
			for(int i=0;i<l;i++)
			tmp.(s+i)=(s+i)+o.(s+i);
			return tmp;
		}
		void show()
		{
			int i;
			for(i=0;i<l;i++)
			cout<<*(s+i);
		}
};
int main()
{
	name p("Computer"),m,n;
	p=m+n;
	p.show();
}
