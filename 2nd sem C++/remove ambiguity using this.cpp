//this pointer remove ambiguity
#include<iostream>
using namespace std;
class student
{
	private:
		int roll,per;
		public:
			void read(int roll,int per)
			{
				this->roll=roll;
				this->per=per;
			}
			void show()
			{
				cout<<"Roll is:"<<this->roll<<endl;
				cout<<"Percentage is:"<<this->per<<endl;
			}
};
int main()
{
	student o1;
	o1.read(12,98);
	o1.show();
}
