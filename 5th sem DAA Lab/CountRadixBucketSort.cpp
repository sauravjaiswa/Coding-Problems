//Implementation of count radix and bucket sort modules

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

void bucketSort(float a[],int n){
    int i,j,key,ind;
    priority_queue<float, vector<float>, greater<float> > li[n];

    for(i=0;i<n;i++)
    {
       key=n*a[i];
        li[key].push(a[i]);
    }

    ind=0;
    for(i=0;i<n;i++){
        cout<<i<<" -> ";
        while(!li[i].empty()){
            cout<<li[i].top()<<" ";
            a[ind++]=li[i].top();
            li[i].pop();
        }
        cout<<"\n";
    }

    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<"\n";
}

void countSort(lli a[],int n,lli max_ele){
    int freq[max_ele+1]={0};
    lli result[n];
    int i;

    for(i=0;i<n;i++)
        freq[a[i]]++;

    for(i=1;i<=max_ele;i++)
        freq[i]=freq[i]+freq[i-1];

    for(i=n-1;i>=0;i--){
        result[freq[a[i]]-1]=a[i];
        freq[a[i]]--;
    }

    for(i=0;i<n;i++)
        a[i]=result[i];

    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<"\n";
}

void radixSort(lli a[],int n,int e){
	int freq[10]={0};
	lli result[n];
	int i;

	for(i=0;i<n;i++)
        freq[(a[i]/e)%10]++;

    for(i=1;i<10;i++)
        freq[i]=freq[i]+freq[i-1];

    for(i=n-1;i>=0;i--)
    {
        result[freq[(a[i]/e)%10]-1]=a[i];
        freq[(a[i]/e)%10]--;
    }

    for (i=0;i<n;i++) {
        a[i]=result[i];
		cout<<a[i]<<" ";
	}
	cout<<"\n";

}

int main(){
    int n,i,ch;

    cout<<"1) Counting Sort\n2) Radix Sort\n3) Bucket Sort\nEnter your choice:\n";
    cin>>ch;

    do{
        if(ch==1){
            cout<<"-----Counting Sort------\n";
            cout<<"Enter length of array:\n";
            cin>>n;
            lli a1[n],max_ele=LONG_MIN;
            cout<<"Enter elements in array:\n";
            for(i=0;i<n;i++){
                cin>>a1[i];
                if(a1[i]>max_ele)
                    max_ele=a1[i];
            }

            cout<<"Sorted elements are:\n";
            countSort(a1,n,max_ele);
        }else if(ch==2){
            cout<<"-----Radix Sort------\n";
            cout<<"Enter length of array:\n";
            cin>>n;
            lli a2[n],max_ele=LONG_MIN;
            cout<<"Enter elements in array:\n";
            for(i=0;i<n;i++){
                cin>>a2[i];
                if(a2[i]>max_ele)
                    max_ele=a2[i];
            }

            cout<<"Sorted elements are:\n";
            for(i=1;max_ele/i>0;i=i*10){
                radixSort(a2,n,i);
            }
        }else if(ch==3){
            cout<<"-----Bucket Sort------\n";
            cout<<"Enter length of array:\n";
            cin>>n;
            float a3[n];
            cout<<"Enter elements in array:\n";
            for(i=0;i<n;i++)
                cin>>a3[i];

            cout<<"Sorted elements are:\n";
            bucketSort(a3,n);
        }else{
            cout<<"Invalid choice!!\n";
        }

        cout<<"1) Counting Sort\n2) Radix Sort\n3) Bucket Sort\nEnter your choice:\n";
        cin>>ch;
    }while(ch==1||ch==2||ch==3);

    return 0;
}
