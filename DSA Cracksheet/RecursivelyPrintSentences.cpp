//Recursively print all sentences that can be formed from list of word lists
//https://www.geeksforgeeks.org/recursively-print-all-sentences-that-can-be-formed-from-list-of-word-lists/

#include<bits/stdc++.h>
#define R 3
#define C 3
using namespace std;

vector<string> v;

void formSentence(vector<vector<string> > words,string sentence,int i){
    //sentence=sentence+words[i][j]+" ";

    if(i==R){
        cout<<sentence<<"\n";
        sentence="";
        return;
    }

    //if(j==words[0].size())
    //    i=i+1;

    for(int k=0;k<words[i].size();k++){
        //sentence=sentence+words[i][j]+" ";
        formSentence(words,sentence+words[i][k]+" ",i+1);
    }

}

int main(){
    int i,j,numberOfWords;
    vector<vector<string> > words(R);
    string sentence="";

    for(i=0;i<R;i++){
        cin>>numberOfWords;
        for(j=0;j<numberOfWords;j++){
            string inp;
            cin>>inp;
            words[i].push_back(inp);
        }
    }

    //for(i=0;i<words[0].size();i++){
            formSentence(words,sentence,0);

    //}


   return 0;
}
