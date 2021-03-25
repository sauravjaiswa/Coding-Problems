/**MST-1**/
/**Given a circular integer array, find the next greater element for every element in it. The next greater element of an element X in the array is the
first larger number to the next of X. In a circular array, the indices will wrap around as if it were connected end-to-end. In other words, the end of
the array wraps around to the start of the array. Therefore, we can search circularly to find the next greater number. If the next greater element doesn’t
exist, consider it to be -1.
For example,
Input:  [3, 5, 2, 4]
Output: [5, -1, 4, 5]

Input:  [7, 5, 3, 4]
Output: [-1, 7, 4, 7]**/

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

void findNextGreater(vector<lli>& a,lli n) {
    stack<lli> s;
    lli i;
    //Appending the same vector at end and implementing the logic of next greatest at right
    a.insert(a.end(),a.begin(),a.end());
    vector<lli> res;
    n=a.size();

    for(i=n-1;i>=0;i--){
        if(s.empty()){
            res.push_back(-1);
            s.push(a[i]);
        }else if(!s.empty()&&s.top()>a[i]){
            res.push_back(s.top());
            s.push(a[i]);
        }else if(!s.empty()&&s.top()<=a[i]){
            while(!s.empty()&&s.top()<=a[i]){
                s.pop();
            }

            if(s.empty()){
                res.push_back(-1);
                s.push(a[i]);
            }else{
                res.push_back(s.top());
                s.push(a[i]);
            }
        }
    }

    reverse(res.begin(),res.end());

    for(i=0;i<n/2;i++)
        cout<<res[i]<<" ";
}

int main(){
    lli n,i;

    cout<<"Enter size of array:\n";
    cin>>n;

    vector<lli> a(n),b;
    cout<<"Enter elements in array:\n";
    for(i=0;i<n;i++)
        cin>>a[i];

    cout<<"Array of next greater elements for each element:\n";
    findNextGreater(a,n);
    cout<<"\n";

    return 0;
}
