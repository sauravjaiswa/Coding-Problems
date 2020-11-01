//Stack Using Queue

#include<bits/stdc++.h>
using namespace std;

class Stack{
    queue<int> q1,q2;

    public:
        void push(int val){
            q1.push(val);
        }

        int pop()
        {
            int top;
            if(q1.empty()){
                cout<<"Stack Underflow!!\n";
                return -1;
            }

            while(q1.size()!=1){
                q2.push(q1.front());
                q1.pop();
            }

            top=q1.front();
            q1.pop();

            while(!q2.empty()){
                q1.push(q2.front());
                q2.pop();
            }
            return top;
        }
};

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.pop()<<"\n";
    s.push(4);
    cout<<s.pop()<<"\n";
    s.push(5);

}
