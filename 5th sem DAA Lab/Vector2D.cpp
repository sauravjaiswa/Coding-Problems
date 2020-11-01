//Matrix in vectors

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int i,j,m,n,ele;
	vector<vector<int> > matrix;
	vector<int> row;
	
	cin>>m>>n;
	
	cout<<"Enter elements of matrix:\n";
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cin>>ele;
			row.push_back(ele);
		}
		matrix.push_back(row);
		row.clear();
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
}
