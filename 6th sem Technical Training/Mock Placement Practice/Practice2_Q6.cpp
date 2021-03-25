/**Given an unsorted array, find the maximum difference between the successive elements in its sorted form. Return 0 if the array contains less than 2 elements
Sample Test Case 1:
Input:[3,6,9,1]
Output: 3
Explanation: The sorted form of the array is [1,3,6,9]. (3,6) or (6,9) has the maximum difference, which is 3.

Sample Test Case 2:
Input:  [10]
Output: 0
Explanation:The array contains less than 2 elements, therefore, return 0.**/

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){

    char ch;
    do{
        lli n,i,j,maxi=0,diff;

        cout<<"Enter size of array:\n";
        cin>>n;
        lli a[n];
        cout<<"Enter elements in array 1:\n";
        for(i=0;i<n;i++)
            cin>>a[i];

        sort(a,a+n);

        for(i=0;i<n-1;i++){
            diff=a[i+1]-a[i];
            if(diff>maxi)
                maxi=diff;
        }

        cout<<"Maximum Difference : "<<maxi<<"\n";
        cout<<"\n";

        cout<<"\n----------------------------------------------------------\n";

        cout<<"Enter 1 to continue test case:\n";
        cin>>ch;

    }while(ch=='1');

    return 0;
}

