#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,ele;
	cout<<"Enter size:\n";
	cin>>n;
	vector <int> v(n);
	vector <int>:: iterator itr;
	cout<<"Enter elements in vector:\n";
	for(itr = v.begin();itr!=v.end();itr++)
		cin >> *itr;
	/*
	for(int i=0;i<v.size();i++)
	{
		cin>>ele;
		v[i]=ele;
	}
	*/
	//vector<int>::iterator itr;
	v.pop_back();
	cout<<"Elements in vector:\n";
	for (itr=v.begin();itr != v.end(); itr++) 
        cout << *itr << " "; 
	
	
}
