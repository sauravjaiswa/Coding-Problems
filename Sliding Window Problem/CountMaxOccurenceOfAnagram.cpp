/*Given a word pat and a text txt. Return the count of the occurences of anagrams of the word in the text.

Example 1:

Input:
txt = forxxorfxdofr
pat = for
Output: 3
Explanation: for, orf and ofr appears
in the txt, hence answer is 3.
Example 2:

Input:
txt = aabaabaa
pat = aaba
Output: 4
Explanation: aaba is present 4 times
in txt.*/

#include<bits/stdc++.h>
using namespace std;

int searchAnagram(string pat, string txt) {
	    // code here
    int m,n,cnt,i,j,k,count=0;
    unordered_map<char,int> mp;
    m=txt.length();
    n=pat.length();

    for(i=0;i<n;i++)
        mp[pat[i]]++;

    cnt=mp.size();
    i=0;
    k=n;
    for(j=0;j<m;j++){
        if(mp.find(txt[j])!=mp.end()){
            mp[txt[j]]--;
            if(mp[txt[j]]==0){
                cnt--;
            }
        }


        if(j-i+1==k){
            if(cnt==0){
                count++;
            }
            if(mp.find(txt[i])!=mp.end()){
                mp[txt[i]]++;
                if(mp[txt[i]]==1)
                    cnt++;
            }

            i++;
        }
    }
    return count;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string txt,pat;
    cin>>txt;
    cin>>pat;
    cout<<"Text:"<<txt<<"\n"<<"Pattern:"<<pat<<"\n";
    cout<<searchAnagram(pat,txt)<<"\n";
    return 0;

}
