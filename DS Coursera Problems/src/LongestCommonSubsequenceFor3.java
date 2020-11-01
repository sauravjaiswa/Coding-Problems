//Longest Common Subsequence between three sequences

import java.io.*;
public class LongestCommonSubsequenceFor3 {
	
	public static int maximum(int a,int b,int c) {
		if(a>=b&&a>=c)
			return a;
		else if(b>=a&&b>=c)
			return b;
		else
			return c;
	}
	
	public static void longestCommon(int s1[],int s2[],int s3[],int m,int n,int o) {
		
		int i,k,j;
		int d[][][]=new int[m+1][n+1][o+1];
		
		for(i=0;i<=m;i++)
		{
			for(j=0;j<=n;j++)
			{
				for(k=0;k<=o;k++)
				{
					if(i==0||j==0||k==0)
						d[i][j][k]=0;				
					else if(s1[i-1]==s2[j-1]&&s2[j-1]==s3[k-1])
					{
						d[i][j][k]=1+d[i-1][j-1][k-1];
					}
					else
						d[i][j][k]=maximum(d[i-1][j][k],d[i][j-1][k],d[i][j][k-1]);
					
				}
				
			}
		}
		
//		for(i=0;i<=m;i++)
//		{
//			for(j=0;j<=n;j++)
//				System.out.print(d[i][j]+" ");
//			System.out.println();
//		}
		
		//System.out.println(d[m][n]);
		System.out.println(d[m][n][o]);
	}
	

	public static void main(String[] args)throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		
		int m,n,o,i;
		int seq1[],seq2[],seq3[],seq4[];
		
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
		
		o=Integer.parseInt(br.readLine());
		seq3=new int[o];
		temp=br.readLine();
		tmpStr=temp.split(" ");
		for(i=0;i<o;i++)
			seq3[i]=Integer.parseInt(tmpStr[i]);
		
		longestCommon(seq1,seq2,seq3,m,n,o);
//		
//		tmpStr=common12.split(" ");
//		seq4=new int[tmpStr.length];
//		for(i=0;i<tmpStr.length;i++)
////			seq4[i]=Integer.parseInt(tmpStr[i]);
//		
//		System.out.println(common12);
//		
//		String common123=longestCommon(seq4,seq3,tmpStr.length,o);
//		
//		System.out.println(common123);

	}

}
