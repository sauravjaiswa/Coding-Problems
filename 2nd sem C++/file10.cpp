#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char a[282];
	fstream file;
	file.open("ate.txt", ios::out|ios::ate);
	if(!file)
    {
      cout<<"Error in creating file.."<<endl;
      return 0;
    }
    cout<<"Enter text:"<<endl;
	cin.getline(a,sizeof(a));
	file<<a<<endl;
    file.close();
	file.open("ate.txt", ios::in|ios::ate);
	file>>a;
	file.close();
}
