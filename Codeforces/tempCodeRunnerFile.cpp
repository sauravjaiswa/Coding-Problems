lli a[k+1],i;
            mid=(lli)ceil(n/2);
            c1=mid;

            a[0]=0;
            a[1]=1;
            for(i=2;i<=k;i++){
                if((i-1)%(mid-1)==0){
                    a[i]=(a[i-1]+2)%n;
                }else{
                    a[i]=a[i-1]+1;
                }
            }
            cout<<a[k]<<"\n";