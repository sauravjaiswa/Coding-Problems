#inlude <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >>n;
	int i;
	vector <int> arr(n);
	vector <int> copy(n);
	for(i=0;i<n;i++)
	{
		cin >> arr[i];
		copy[i] = arr[i];
	}
	// 123 432 5234
	vector <<int>> radix(10);
	int minim = *min_element(arr.begin(),arr.end());
	int den = 10;
	i = 0;
	while(minim!=0)
	{
		minim = minim/10;
		for(i=0;i<n;i++)
		{
			radix[copy[i]%den].push_back(arr[i]);
			copy[i] = copy[i] / 10;
		}
		
	}
		
	
	
}
