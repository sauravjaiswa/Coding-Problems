//Boyer Moore Pattern Matching Algorithm
//https://www.geeksforgeeks.org/boyer-moore-algorithm-for-pattern-searching/

#include <bits/stdc++.h>
using namespace std;

void searchPattern(string txt,string pttrn,int m,int n){
    int i,j,shift;
    int lastOccur[256]={-1};//To store last occurrence of characters in pattern

    for(i=0;i<n;i++)
        lastOccur[pttrn[i]]=i;

    shift=0;
    while(shift<=(m-n)){
        j=n-1;
        while(j>=0 && pttrn[j]==txt[shift+j])
            j--;

        if(j<0){
            cout<<"Pattern is at shift : "<<shift<<"\n";
            shift+=(shift+n)<m?n-lastOccur[txt[shift+n]]:1;
        }else{
            shift+=max(j-lastOccur[txt[shift+j]],1);
        }

    }

}

int main() {
	//code

    string txt,pttrn;
    int m,n;

    cin>>txt;
    cin>>pttrn;

    m=txt.length();
    n=pttrn.length();

    searchPattern(txt,pttrn,m,n);

	return 0;
}
