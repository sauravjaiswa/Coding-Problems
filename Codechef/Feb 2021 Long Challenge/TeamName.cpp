//Team Name

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    lli t;
    cin>>t;
    while(t--){
        lli n,i,j;
        cin>>n;
        vector<string> words;
        string temp,temp2;
        unordered_set<string> store;
        unordered_map<string,int> wordMap;
        unordered_set<char> first;
        unordered_set<string> suffix;
        vector<string> finalWords;
        lli cnt=0;

        for(i=0;i<n;i++){
            cin>>temp;

            words.push_back(temp);
            wordMap[temp]++;
            first.insert(temp[0]);
            suffix.insert(temp.substr(1,temp.length()));
        }

        if(first.size()==1){
            cout<<"0\n";
        }else{
            for(auto it1:suffix){
                for(auto it2:first){
                    temp=it2+it1;
                    if(wordMap[temp]==0){
                        finalWords.push_back(temp);
                        // cout<<temp<<" ";
                    }
                }
            }
            // cout<<"\n";

            // for(auto it:store){
            //     finalWords.push_back(it);
            // }

            if(finalWords.size()<words.size()){

                for(i=0;i<finalWords.size();i++){
                    for(j=i+1;j<finalWords.size();j++){

                        temp=finalWords[j][0]+finalWords[i].substr(1,finalWords[i].length());
                        temp2=finalWords[i][0]+finalWords[j].substr(1,finalWords[j].length());

                        if(wordMap[temp]>0&&wordMap[temp2]>0)
                            cnt+=2;

                    }
                }

            }else{

                for(i=0;i<words.size();i++){
                    for(j=i+1;j<words.size();j++){

                        temp=words[j][0]+words[i].substr(1,words[i].length());
                        temp2=words[i][0]+words[j].substr(1,words[j].length());

                        if(wordMap[temp]==0&&wordMap[temp2]==0)
                            cnt+=2;

                    }
                }

            }



            cout<<cnt<<"\n";
        }


    }
    return 0;
}
