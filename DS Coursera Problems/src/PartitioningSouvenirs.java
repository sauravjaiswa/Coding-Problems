//Partitioning Souvenirs-Equal Partition problem

import java.io.*;

public class PartitioningSouvenirs {
	
	public static void equiPartition(int a[],int n)
	{
		int i,sum=0;
		for(i=0;i<n;i++)
			sum=sum+a[i];
		if(sum%3==0)
			System.out.println(subset(a,n,sum/3));
		else
			System.out.println("0");
	}
	
	public static int subset(int a[],int n,int sum)
	{
		boolean t[][]=new boolean[n+1][sum+1];
		int i,j;
		
		for(i=0;i<=n;i++)
		{
			for(j=0;j<=sum;j++)
			{
				if(i==0)
					t[i][j]=false;
				if(j==0)
					t[i][j]=true;
			}
		}
		
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=sum;j++)
			{
				if(a[i-1]<=j)
					t[i][j]=(t[i-1][j-a[i-1]])||(t[i-1][j]);
				else
					t[i][j]=t[i-1][j];
			}
		}
		
		if(t[n][sum]==true)
			return 1;
		else
			return 0;
	}

	public static void main(String[] args)throws Exception {
		// TODO Auto-generated method stub
		
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int n,i,a[];
		String temp,tmpStr[];
		
		n=Integer.parseInt(br.readLine());
		
		a=new int[n];
		temp=br.readLine();
		tmpStr=temp.split(" ");
		for(i=0;i<n;i++)
			a[i]=Integer.parseInt(tmpStr[i]);
		
		equiPartition(a,n);

	}

}
