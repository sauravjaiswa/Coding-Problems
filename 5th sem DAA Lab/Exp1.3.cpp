//Exp 3-Frequency of element in given array

#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,n;
	int freq[10]={0};

    cout<<"Enter size of array:\n";
    cin>>n;
    int a[n];

    cout<<"Enter only digits in array:\n";
    for(i=0;i<n;i++){
        cin>>a[i];
		freq[a[i]]=freq[a[i]]+1;
	}


	for(i=0;i<10;i++){
		if(freq[i]>0){
			cout<<i<<"  "<<freq[i]<<endl;
		}
	}
}
