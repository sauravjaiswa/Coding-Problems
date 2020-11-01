#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char text[80];
	fstream file;
	file.open("file2.txt",ios::out);
	if(!file)	//Checking whethr file exist
	cerr<<"File not created"<<endl;
	cout<<"Enter data:"<<endl;
	cin.getline(text,80);
	file<<text;
	file.close();
	file.open("file2.txt",ios::in);
	while(!file.eof())	//eof()-end of file
	{
		file.getline(text,80);
//		file>>text;			//Reading from file
		cout<<text;		//Message read from file
	}
	file.close();
}
