#include <bits/stdc++.h>
using namespace std;

bool check(int n) {
    int prev = INT_MAX;
    while (n!=0) {
        int rem = n % 10;
        if (rem >= prev) {
            return false;
        }
        prev = rem;
        n = n/10;
    }
    return true;
}


int countDigits(int n) {
    int count = 0;
    while (n!=0) {
        int rem = n % 10;
        count++;
        n = n/10;
    }
    return count;
}


int main() {
	int n;
	cin >> n;
	bool flag = check(n);
	if (flag) {
	    cout << n << "\n";
	} else {
	    int digits = countDigits(n);
	    int num = n;
	    int ans = 0;
	    while (digits > 0) {
	        int first = num / pow(10,digits-1);
	        int base = 0;
	        for (int i=0;i<digits;i++) {
	            base = base * 10 + first;
	        }
	        //cout << ans << " ";

	        if (num <= base) {

	            //ans = ans * 10 + (first-1);
	            if (9-first >= digits) {
	                ans = ans * 10 + (first-1);

	                int extra = 0;
	                int mul = pow(10, digits-1);
	                first = 9 - digits + 2;
	                while (digits > 1) {
	                    extra = extra * 10 + first;
	                    first++;
	                    digits--;
	                }

	                ans = ans * mul + extra;
	                break;



	            } else {
	                //cout << ans << " \n";
	                first = first - digits + 1;
	                int extra = first;
	                int mul = pow(10, digits);
	                //cout << mul << "\n";
	                first++;
	                while (digits > 1) {
	                    extra = extra * 10 + first;
	                    first++;
	                    digits--;
	                }

	                ans = ans * mul + extra;
	                break;

	            }


	        } else {

	            ans = ans * 10 + first;
	        }

	        num = num - first * pow(10,digits-1);
	        digits--;
	    }


	    cout << ans << "\n";

	}


	return 0;
}
