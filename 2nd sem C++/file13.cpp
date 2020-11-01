#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream file("file13.txt", ios::out);
	char ch[100];
	cin.getline(ch,sizeof(ch));
	cout<<"Initial g:"<<file.tellg()<<endl;
	cout<<"Initial p:"<<file.tellp()<<endl;
	file<<ch;
	cout<<"Final g:"<<file.tellg()<<endl;
	cout<<"Final p:"<<file.tellp()<<endl;
}

