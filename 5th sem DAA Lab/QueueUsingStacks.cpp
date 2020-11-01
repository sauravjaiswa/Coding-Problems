//Queue using stacks

#include<bits/stdc++.h>
using namespace std;

class Queue{
    stack<int> s1,s2;

    public:
        void enqueue(int val){

            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }

            s1.push(val);

            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
        }

        int dequeue()
        {
            int val;
            if(s1.empty()){
                cout << "Queue Underflow!!";
            }

            val=s1.top();
            s1.pop();
            return val;
        }
};

int main(){
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout<<q.dequeue()<<"\n";
    q.enqueue(4);
    cout<<q.dequeue()<<"\n";
    q.enqueue(5);

}
