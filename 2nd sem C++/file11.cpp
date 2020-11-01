#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin("file11.cpp");
	char c;
	while(!fin.eof())
	{
	    fin.get(c);
	    cout<<c;
	}
	fin.close();
	return 0;
}

