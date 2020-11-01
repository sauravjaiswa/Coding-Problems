#include<iostream>
#include<fstream>
using namespace std;
class student
{
	public:
		int roll;
		char m[20];
		void read()
		{
			cout<<"Enter student information:"<<endl;
			cin>>roll>>m;
		}
		void display()
		{
			cout<<"Roll:"<<roll<<endl;
			cout<<"Name:"<<m<<endl;
		}
};
int main()
{
	student s1;
	s1.read();
	fstream fout;
	fout.open("binary.txt", ios::out|ios::trunc|ios::binary);
	fout.write((char *)&s1,sizeof(s1));
	fout.close();
	fout.open("binary.txt", ios::in|ios::trunc|ios::binary);
	fout.read((char *)&s1,sizeof(s1));
	s1.display();
	fout.close();
}
