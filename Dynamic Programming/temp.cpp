#include <bits/stdc++.h>
using namespace std;

bool checkIncreasing(int n){
    int d,copy,prev=(n%10)+1;
    copy=n;
    while(copy!=0){
        d=copy%10;
        if(d>=prev)
            return false;
        copy=copy/10;
        prev=d;
    }
    return true;
}

void checkNumber(int n){
    int dig,copy=n,numOfDigs=0,threshold=0,result=0,d;
    int copyNumDigs;

    while(copy!=0){
        dig=copy%10;
        copy=copy/10;

        numOfDigs++;
    }
    copyNumDigs=numOfDigs;
    // cout<<numOfDigs<<"\n";

    while(copyNumDigs!=0){
        threshold=(threshold*10)+dig;

        copyNumDigs--;
    }
    copyNumDigs=numOfDigs;
    // cout<<threshold<<"\n";
    int i;
    if(n>=threshold){

        for(i=n-1;i>threshold;i--){
            if(checkIncreasing(i)){
                cout<<i;
                break;
            }
        }

    }else{
        d=9;
        // cout<<copyNumDigs<<"\n";
        while(copyNumDigs>1){
            result=(result*10)+d;
            d=d-1;
            copyNumDigs--;
        }
        result=(result*10)+(dig-1);

        copy=result;
        result=0;
        while(copy!=0){
            d=copy%10;
            result=(result*10)+d;
            copy=copy/10;
        }

        cout<<result;
    }


}

int main() {
	int n;
	cin >> n;

	if(checkIncreasing(n))
	cout<<n;
	else{
	    checkNumber(n);
	}

	return 0;
}
