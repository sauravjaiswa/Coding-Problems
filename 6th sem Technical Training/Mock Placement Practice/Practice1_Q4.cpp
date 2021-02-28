/*Imagine an alphabet of words. Example:
a ==> 1
b ==> 2
c ==> 3
. . .
z ==> 26
ab ==> 27
ac ==> 28
. . .
az ==> 51
bc ==> 52
and so on such that the sequence of characters need to be in ascending order only (ab is valid but ba is not). Given any word print its index if valid and 0 if not.

Test Case 1:
Input - ab
Output - 27

Test Case 2:
Input - ba
Output - 0

Test Case 3:
Input - aez
Output - 441
Note-: Try to implement a solution that does not involve Brute-force approach.*/

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

lli nCr(lli n,lli r) {
    int i,res=1;
    if(r>n-r)
        r=n-r;

    for(i=0;i<r;i++) {
        res*=(n-i);
        res/=(i+1);
    }

    return res;
}

int main(){

    char ch;
    do{
        lli n,i,j,k,value,f=0;
        string text;
        cout<<"Input text:\n";
        cin>>text;

        i=0;
        n=text.length();

        for(i=0;i<n-1;i++){
            if(text[i]>text[i+1]){
                f=1;
                break;
            }
        }

        if(f==1){
            cout<<"Index position is : 0\n";
        }else{

            i=0;
            //Helps to calculate the start index of our pattern
            for(j=1;j<n;j++){
                //cout<<nCr(26,j)<<"\n";
                i+=nCr(26,j);
            }

            i=i+1;
            char startLetter;
            for(j=0;j<n;j++){
                if(j==0)
                    startLetter='a';
                else
                    startLetter=text[j-1]+1;

                for(k=startLetter;k<text[j];k++){
                    int toChoose=n-j-1;
                    int choices='z'-k;

                    i+=nCr(choices,toChoose);
                }

            }

            cout<<"Index position is : "<<i<<"\n";
        }



        cout<<"\n----------------------------------------------------------\n";

        cout<<"Enter 1 to continue test case:\n";
        cin>>ch;

    }while(ch=='1');

    return 0;
}
