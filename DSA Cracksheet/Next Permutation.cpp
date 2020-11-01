class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int i,j,n,inp;

        n=a.size();
	    int f=0,diff,mini=INT_MAX,pos,temp;

        for(i=n-2;i>=0;i--){
            if(a[i]<a[i+1]){
                temp=a[i];

                for(j=i+1;j<n;j++){
                    if(a[j]>temp){
                        diff=a[j]-temp;

                        if(diff<mini){
                            mini=diff;
                            pos=j;
                        }
                    }
                }

                temp=a[i];
                a[i]=a[pos];
                a[pos]=temp;

                int k=0;
                // for(j=i+1;j<=(i+n)/2;j++){
                //     temp=a[j];
                //     a[j]=a[n-k-1];
                //     a[n-k-1]=temp;
                //     k++;
                // }
                sort(a.begin()+i+1,a.end());

                f=1;

                break;

            }
        }

        if(f==0){
            for(i=0;i<n/2;i++){
                temp=a[i];
                a[i]=a[n-i-1];
                a[n-i-1]=temp;
            }
        }


    }
};
