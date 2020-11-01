#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char text[80];
	fstream file;
	file.open("file6.txt",ios::out|ios::in|ios::trunc);
	if(!file)	//Checking whethr file exist
	cerr<<"File not created"<<endl;
	cout<<"Enter data:"<<endl;
	cin.getline(text,80);
	file<<text;
	cout<<"size of file:"<<file.tellp()<<endl;
	file.seekg(0,ios::end);
	cout<<"size of file:"<<file.tellg();
	file.close();
}
