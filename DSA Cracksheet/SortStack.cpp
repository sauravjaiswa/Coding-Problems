//Sort Stack

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

void sortInsertAtBottom(stack<int> &s,int ele){
    if(s.empty()||ele>s.top()){
        s.push(ele);
        return;
    }

    int temp=s.top();
    s.pop();
    sortInsertAtBottom(s,ele);
    s.push(temp);
}

void sortStack(stack<int> &s){
    if(s.size()==1)
        return;

    int ele=s.top();
    s.pop();
    sortStack(s);
    sortInsertAtBottom(s,ele);
}

int main(){
    stack<int> st,s;

    st.push(45);
    st.push(222);
    st.push(33);
    st.push(4);

    s=st;

    cout<<"Original Stack"<<endl;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    sortStack(s);
    cout<<"\nSorted Stack"
        <<endl;

    while(!s.empty())
    {
        lli p=s.top();
        s.pop();
        cout<<p<<" "<<endl;
    }

    return 0;
}
