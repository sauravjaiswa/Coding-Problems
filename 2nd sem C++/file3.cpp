#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char text;
	ofstream out("file3.txt");
	if(!out)	//Checking whethr file exist	
	{
		cerr<<"File not created"<<endl;
		exit(-1);
	}
	cout<<"Enter data:"<<endl;
	cin.get(text);
	while(text!='\n')
	{
		out.put(text);
		cin.get(text);
	}
	out.close();
	ifstream in("file3.txt");
	while(!in.eof())
	{
		in.get(text);
		cout<<text;
	}
	in.close();
}
