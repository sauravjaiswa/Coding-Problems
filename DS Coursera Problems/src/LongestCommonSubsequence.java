//Longest Common Subsequence between two sequences

import java.io.*;
public class LongestCommonSubsequence {
	
	public static void longestCommon(int s1[],int s2[],int m,int n) {
		
		int insert=0,del=0,i,j;
		int d[][]=new int[m+1][n+1];
		
		for(i=0;i<=m;i++)
		{
			for(j=0;j<=n;j++)
			{
				if(i>0&&j>0)
				{
					insert=d[i][j-1];
					del=d[i-1][j];
				}
				
				if(i==0||j==0)
					d[i][j]=0;				
				else if(s1[i-1]==s2[j-1])
					d[i][j]=1+d[i-1][j-1];
				else
					d[i][j]=(int)Math.max(insert, del);
			}
		}
		
//		for(i=0;i<=m;i++)
//		{
//			for(j=0;j<=n;j++)
//				System.out.print(d[i][j]+" ");
//			System.out.println();
//		}
		
		System.out.println(d[m][n]);
	}
	

	public static void main(String[] args)throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		
		int m,n,i;
		int seq1[],seq2[];
		
		String temp,tmpStr[];
		
		m=Integer.parseInt(br.readLine());
		seq1=new int[m];
		temp=br.readLine();
		tmpStr=temp.split(" ");
		for(i=0;i<m;i++)
			seq1[i]=Integer.parseInt(tmpStr[i]);
		
		n=Integer.parseInt(br.readLine());
		seq2=new int[n];
		temp=br.readLine();
		tmpStr=temp.split(" ");
		for(i=0;i<n;i++)
			seq2[i]=Integer.parseInt(tmpStr[i]);
		
		longestCommon(seq1,seq2,m,n);

	}

}
