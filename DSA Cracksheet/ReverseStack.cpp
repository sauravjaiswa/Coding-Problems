//Reverse a stack using O(1) space

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

void insertAtBottom(stack<lli> &s,lli ele){
    if(s.size()==0){
        s.push(ele);
        return;
    }

    lli temp=s.top();
    s.pop();
    insertAtBottom(s,ele);
    s.push(temp);
}

void reverseStack(stack<lli> &s){
    if(s.size()==1)
        return;
    else{
        lli ele=s.top();
        s.pop();
        reverseStack(s);
        insertAtBottom(s,ele);
    }
}

int main(){
    stack<lli> st,s;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    s=st;

    cout<<"Original Stack"<<endl;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    reverseStack(s);
    cout<<"\nReversed Stack"
        <<endl;

    while(!s.empty())
    {
        lli p=s.top();
        s.pop();
        cout<<p<<" "<<endl;
    }

    return 0;
}
