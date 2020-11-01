//get and put pointer in fstream()
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char s[100];
	fstream file;
	file.open("pointer.txt",ios::out|ios::trunc);
	cout<<"Current position of put pointer:"<<file.tellp()<<endl;
	cin.getline(s,sizeof(s));
	file<<s<<endl;
	cout<<"Current position of put pointer:"<<file.tellp()<<endl;
	file.seekp(-5,ios::end);
	cout<<"Current position of put pointer:"<<file.tellp()<<endl;
	cout<<"Get pointer:"<<endl;
	file.close();
	file.open("pointer.txt",ios::in);
	cout<<"Current position of get pointer:"<<file.tellg()<<endl;
//	file.seekg(5,ios::beg);
	while(!file.eof())
	{
		file.getline(s,sizeof(s));
		cout<<s<<endl;
	}
	cout<<"Current position of get pointer:"<<file.tellg()<<endl;
	file.close();
}
