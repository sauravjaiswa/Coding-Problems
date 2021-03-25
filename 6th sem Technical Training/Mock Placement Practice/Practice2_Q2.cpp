/**Given an integer array called nums, design an algorithm to randomly shuffle the array. Create function shuffle, which takes array and it's size
as argument. Use rand() function to generate an array of random integer. Write another function swap, which would swap the elements at previous index
with the new random index.

Sample Test Case :
Size=5
Input Array: [5,67,45,25,21]
Random index = [3,1,2,0,4]
Output array: [45,5,67,25,25]
The zeroth index is having no previous element and therefore there would be no swap. **/

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

void swap(lli a[],lli i,lli j)
{
    lli temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}

void shuffle(lli a[],lli n){
    lli i,j,random[n],b[n];

    for(i=0;i<n;i++){
        random[i]=i;
    }

    random_shuffle(random,random+n);

    for(i=0;i<n;i++){
        if(random[i]==0){
            b[i]=a[i];
        }else{
            b[i]=a[random[i]-1];
        }
    }

    cout<<"Index array after shuffling:\n";
    for(i=0;i<n;i++)
        cout<<random[i]<<" ";
    cout<<"\n";

    cout<<"Shuffled array:\n";
    for(i=0;i<n;i++)
        cout<<b[i]<<" ";
    cout<<"\n";
}

int main(){

    char ch;
    do{
        lli m,n,i,j,maxi=0,diff;

        cout<<"Enter size of array:\n";
        cin>>n;
        lli a[n];

        cout<<"Enter elements in array:\n";
        for(i=0;i<n;i++){
            cin>>a[i];
        }

        shuffle(a,n);

        cout<<"\n----------------------------------------------------------\n";

        cout<<"Enter 1 to continue test case:\n";
        cin>>ch;

    }while(ch=='1');

    return 0;
}
