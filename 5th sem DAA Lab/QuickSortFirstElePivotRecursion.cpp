//Quick sort with first, last and random element as pivot using recursion

#include<bits/stdc++.h>
using namespace std;

class QuickSort{
public:
    void quickSort(int a[],int lb,int ub,int ch){
        int pivot;
        if(lb<ub){
            if(ch==1)
                pivot=pivotPartitionL(a,lb,ub);
            else if(ch==2)
                pivot=pivotPartitionU(a,lb,ub);
            else
                pivot=pivotPartitionRand(a,lb,ub);

            quickSort(a,lb,pivot-1,ch);
            quickSort(a,pivot+1,ub,ch);
        }
    }

    int pivotPartitionL(int a[],int lb,int ub){
        int pivot,s,e;
        pivot=a[lb];
        s=lb;
        e=ub;

        while(s<=e){
            while(a[s]<=pivot)
                s++;

            while(a[e]>pivot)
                e--;

            if(s<e)
                swap(a[s],a[e]);
        }
        swap(a[lb],a[e]);

        return e;
    }

    int pivotPartitionU(int a[],int lb,int ub){
        int pivot,s,e;
        pivot=a[ub];
        s=lb;
        e=ub;

        while(s<=e){
            while(a[s]<pivot)
                s++;

            while(a[e]>=pivot)
                e--;

            if(s<e)
                swap(a[s],a[e]);
        }
        swap(a[ub],a[s]);

        return s;
    }

    int pivotPartitionRand(int a[],int lb,int ub){
        int random=lb+rand()%(ub-lb);
        swap(a[random],a[lb]);

        return pivotPartitionL(a,lb,ub);
    }

    void display(int a[],int n){
        int i;
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<"\n";
    }
};

int main(){
    int n,i,ch;
    QuickSort q;
    cout<<"Enter length of array:\n";
    cin>>n;
    int a[n];
    cout<<"Enter elements in array:\n";
    for(i=0;i<n;i++)
        cin>>a[i];

    cout<<"1 for first element as pivot\n2 for last element as pivot\n3 for random element as pivot\nEnter your choice:\n";
    cin>>ch;

    q.quickSort(a,0,n-1,ch);
    cout<<"The array after Quick Sort is:\n";
    q.display(a,n);
}
