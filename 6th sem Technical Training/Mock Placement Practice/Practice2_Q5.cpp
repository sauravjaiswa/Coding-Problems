/**Given a non-empty string S and a dictionary wordDict containing a list of non-empty words, add spaces in S to construct a sentence where each word
is a valid dictionary word. Return all such possible sentences in any order.
Sample Test Case
Input: S = “pineapplepenapple”, wordDict=[“apple”,”pen”,”applepen”,”pine”,”pineapple”]
Output: [“pine apple pen apple”, ”pineapple pen apple”, “pine applepenapple apple”]**/

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

vector<string> res;

void wordBreakUtil(string s,string ans,vector<string>& wordDict){
    int n,i;
    n=s.length();

    if(n==0){
        res.push_back(ans);
        return;
    }

    for(i=0;i<n;i++){

        string word=s.substr(0,i+1);
        if(find(wordDict.begin(),wordDict.end(),word)!=wordDict.end()){

            string left=s.substr(i+1);
            wordBreakUtil(left,ans+word+" ",wordDict);
        }
    }


}

vector<string> wordBreak(string s, vector<string>& wordDict) {

    wordBreakUtil(s,"",wordDict);

    for(int i=0;i<res.size();i++){
        res[i]=res[i].substr(0,res[i].length()-1);
    }

    return res;
}

int main(){

    char ch;
    do{
        lli n,i,j;
        string s;
        vector<string> dict;

        dict.push_back("apple");
        dict.push_back("pen");
        dict.push_back("applepen");
        dict.push_back("pine");
        dict.push_back("pineapple");

        cout<<"Enter enter a string:\n";
        cin>>s;

        cout<<"\nThe string is:\n";
        cout<<s<<"\n";

        cout<<"\nWords in dictionary are:\n";
        for(i=0;i<dict.size();i++){
            cout<<dict[i]<<" ";
        }
        cout<<"\n";

        wordBreak(s,dict);

        cout<<"\nSentences made are ; \n";
        for(i=0;i<res.size();i++){
            cout<<res[i]<<"\n";
        }

        cout<<"\n----------------------------------------------------------\n";

        cout<<"Enter 1 to continue test case:\n";
        cin>>ch;

    }while(ch=='1');

    return 0;
}
