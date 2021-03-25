/**Write a program to shuffle deck of cards, display the shuffled deck, sort it and display the sorted deck. The deck will be represented by an
array of integers where the integer values correspond to a card. Sorting has to be done on the basis of suites, and their corresponding ranks.
The priority to sort the suites is: HEARTS, SPADES, DIAMONDS, CLUBS.**/

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

class Pair{
public:
    string suite;
    int num;

    Pair(string suite,int num){
        this->suite=suite;
        this->num=num;
    }
};

unordered_map<string,lli> mp;

bool cmp(Pair p1,Pair p2){
    if(p1.suite==p2.suite){
        return p1.num<p2.num;
    }

    return mp[p1.suite]<mp[p2.suite];
}

int main(){
    vector<pair<int,string>> arr;

    mp["HEARTS"]=1;
    mp["SPADES"]=2;
    mp["DIAMONDS"]=3;
    mp["CLUBS"]=4;

    lli q,i,x;
    string suite;
    vector<Pair> v;

    cout<<"Enter number of queries:\n";
    cin>>q;

    cout<<"Enter suite name and number:\n";
    for(i=0;i<q;i++){
        cin>>suite>>x;
        v.push_back(Pair(suite,x));
    }

    sort(v.begin(),v.end(),cmp);

    for(auto it:v)
        cout<<it.suite<<" "<<"of"<<" "<<it.num<<"\n";
}
