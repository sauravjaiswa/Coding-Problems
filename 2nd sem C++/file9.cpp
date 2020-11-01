#include<iostream>
#include<fstream>
using namespace std;
class exp
{
	public:
		int a,b,c;
		void read()
		{
			cout<<"Enter two numbers:"<<endl;
			cin>>a>>b;
		}
		void add()
		{
			c=a+b;
		}
		void display()
		{
			cout<<"Result:"<<c<<endl;
		}
};
int main()
{
	exp e;
	fstream file;
	file.open("add.txt", ios::out|ios::trunc);
	if(!file)
    {
      cout<<"Error in creating file.."<<endl;
      return 0;
    }
    e.read();
    e.add();
    e.display();
    file.write((char*)&e,sizeof(e));
    file.close();
	file.open("add.txt", ios::in|ios::trunc);
	file.read((char*)&e,sizeof(e));
	e.display();
	file.close();
}
