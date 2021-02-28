/*In a tournament, the total number of players are N [0-N-1], and each player has at Max ‘M’ [0-M-1] followers. Write a program which selects minimum number of players so that total followers is equal to a specified number ‘K’.
The inputs given below have the following format. First line contains values of N, M, K followed by N lines containing string of 0 or 1 such that for ith line if jth char is 1 it means j'th person follows player 'i'
For example for the given values
     3, 6, 5
     111100
     000100
     000010
The program should output 02 followers (0th and 2nd indices)

Test Case 2:
11, 7,1
1111000
0001000
0000100
0000010
1000000
0100000
0010000
1100000
0011000
0000110
0000110
The indices are 1,
The minimum num is 1

Test Case 3:
11, 7, 2
1111000
0001000
0000100
0000010
1000000
0100000
0010000
1100000
0011000
0000110
0000110
Answer =1 ( select 7)
The indices are 7,
The minimum num is 1
*/

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){

    char ch;
    do{
        lli n,m,k,i,j,cnt;
        cin>>n>>m>>k;
        char followers[n][m];
        vector<lli> a;

        for(i=0;i<n;i++){
            cnt=0;
            for(j=0;j<m;j++){
                cin>>followers[i][j];

                if(followers[i][j]=='1')
                    cnt++;
            }
            a.push_back(cnt);
        }

        sort(a.begin(),a.end());

        cnt=0;
        for(i=n-1;i>=0;i--){
            if(a[i]==k){
                cnt++;
                break;
            }else if(a[i]<k){
                k=k-a[i];
                cnt++;
            }
        }

        cout<<"Minimum number of players are : "<<cnt<<"\n";

        cout<<"\n----------------------------------------------------------\n";

        cout<<"Enter 1 to continue test case:\n";
        cin>>ch;

    }while(ch=='1');

    return 0;
}
