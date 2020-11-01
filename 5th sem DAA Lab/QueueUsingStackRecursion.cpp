//Queue using stacks using recursion

#include<bits/stdc++.h>
using namespace std;

class Queue{
    stack<int> s;

    public:
        void enqueue(int val){
            s.push(val);
        }

        int dequeue()
        {
            int top,data;
            if(s.empty()){
                cout << "Queue Underflow!!";
            }

            top=s.top();
            s.pop();
            if(s.empty())
                return top;

            data=dequeue();
            s.push(top);

            return data;
        }

        void display(){
            cout<<"Current stack\n";
            while(!s.empty()){
                cout<<s.top()<<" ";
                s.pop();
            }
            cout<<"\n";
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

    q.display();

}
