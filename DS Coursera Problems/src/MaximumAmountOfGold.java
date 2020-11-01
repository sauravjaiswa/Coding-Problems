//Maximum Amount of Gold- 01 Knapsack Problem

import java.io.*;

public class MaximumAmountOfGold {
	
	public static void knapsack(int w[],int n,int W) {
		int t[][]=new int[n+1][W+1];
		int i,j,tempWt;
		
		for(i=0;i<=n;i++) {
			for(j=0;j<=W;j++)
			{
				if(i==0||j==0)
					t[i][j]=0;
			}
		}
		
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=W;j++)
			{
				t[i][j]=t[i-1][j];
				
				if(w[i-1]<=j)
				{
					tempWt=t[i-1][j-w[i-1]]+w[i-1];
					
					if(tempWt>t[i][j])
					t[i][j]=tempWt;	
				}
			}
		}
		
//		for(i=1;i<=n;i++)
//		{
//			for(j=1;j<=W;j++)
//			System.out.print(t[i][j]+" ");
//			System.out.println();
//		}
		System.out.println(t[n][W]);
		
	}

	public static void main(String[] args)throws Exception {
		// TODO Auto-generated method stub
		
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int W,n,i,w[];
		String temp,tmpStr[];
		
		temp=br.readLine();
		tmpStr=temp.split(" ");
		
		W=Integer.parseInt(tmpStr[0]);
		n=Integer.parseInt(tmpStr[1]);
		
		w=new int[n];
		temp=br.readLine();
		tmpStr=temp.split(" ");
		for(i=0;i<n;i++)
			w[i]=Integer.parseInt(tmpStr[i]);
		
		knapsack(w,n,W);

	}

}
