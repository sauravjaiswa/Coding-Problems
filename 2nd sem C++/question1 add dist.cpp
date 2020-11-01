//Add distance
#include<iostream>
using namespace std;
class Distance
{
	int ft;
	float inch;
	public:
		void set()
		{
			cout<<"Enter feet:"<<endl;
			cin>>ft;
			cout<<"Enter inch:"<<endl;
			cin>>inch;
		}
	public:
		Distance add(Distance d)
		{
			Distance o;
			o.ft=ft+d.ft;
			o.inch=inch+d.inch;
			return o;
		}
	public:
		void display()
		{
			cout<<"Distance is: "<<ft<<" feet "<<inch<<" inches"<<endl;
	    }
};
int main()
{
	Distance ob,o1,o3;
	ob.set();
	o1.set();
	o3=o1.add(ob);
	o3.display();
}
