//10.ii)Wap to use tellg() and tellp().
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char s[100];
	fstream file;
	file.open("tell.txt", ios::out|ios::trunc);
	cout<<"Enter text:"<<endl;
	cin.getline(s,sizeof(s));
	cout<<"Intial position of get pointer:"<<file.tellp()<<endl;
	file<<s;
	cout<<"Final position of get pointer:"<<file.tellg()<<endl;
	cout<<"Size of file:"<<file.tellp()<<endl;
	file.close();
}
