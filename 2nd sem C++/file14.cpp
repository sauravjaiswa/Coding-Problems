#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char ch;
	fstream file("file13.txt", ios::in);
	cout<<"Initial g:"<<file.tellg()<<endl;
	while(!file.eof())
	{
		file.get(ch);
		cout<<ch;
	}
	
	cout<<"Initial p:"<<file.tellp()<<endl;
	cout<<"Final g:"<<file.tellg()<<endl;
	cout<<"Final p:"<<file.tellp()<<endl;
}

