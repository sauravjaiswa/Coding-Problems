#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream file("letters.txt", ios::in);
	char ch;
	file.seekg(5, ios::beg);
	file.get(ch);
	cout << "Byte 5 from beginning: " << ch << endl;
	file.seekg(-10, ios::end);
	file.get(ch);
	cout << "Byte 10 from end: " << ch << endl;
	file.seekg(3, ios::cur);
	file.get(ch);
	cout << "Byte 3 from current: " << ch << endl;
	file.seekg(0, ios::beg);
	file.get(ch);
	cout << "Byte 0 from beginning: " << ch << endl;

	file.close();
    return 0;
}

