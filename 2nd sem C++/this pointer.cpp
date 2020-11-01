//this pointer
#include<iostream>
using namespace std;
class student
{
	private:
		int roll,per;
		public:
			void read()
			{
				cout<<"Enter roll number:"<<endl;
				cin>>roll;
				cout<<"Enter percentage:"<<endl;
				cin>>per;
			}
			void show()
			{
				cout<<"The highest percentage is:"<<per<<endl;
			}
			student& compare(student &s2)
			{
				if(per>=s2.per)
				return *this;
				else
				return s2;
			}
};
int main()
{
	student o1,o2,o3;
	o1.read();
	o2.read();
	o3=o1.compare(o2);
	o3.show();
	
}
