//To check character is digit or not using inline function
#include<iostream>
#include<string.h>
using namespace std;
class chkdigit
{
	char s[200];
	public:
		void get()
		{
			cout<<"Enter a string:"<<endl;
			gets(s);
		}
	inline int check(char c)
	{
		return ((c>='0'&&c<='9')?1:0);
	}
	public:
		void passch()
		{
			int i,l;
			l=strlen(s);
			for(i=0;i<l;i++)
			if(check(s[i])==1)
			cout<<s[i]<<" is a digit."<<endl;
			else
			cout<<s[i]<<" is not a digit."<<endl;			
		}
};
int main()
{
	chkdigit ob;
	ob.get();
	ob.passch();
}


