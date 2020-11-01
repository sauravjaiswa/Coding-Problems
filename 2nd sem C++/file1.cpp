#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char text[80];
	fstream file;
	file.open("file1.txt", ios::out|ios::in|ios::trunc);
	//Writing in file
	cout<<"Write data in the file:"<<endl;
	cin.getline(text,sizeof(text));
	file<<text<<endl;
	//Reading from file
	cout<<text<<endl;
	file<<text;
	file.close();
//	file.clear();
}
