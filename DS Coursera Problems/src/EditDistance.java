//Edit Distance

import java.io.*;
public class EditDistance {
	
	public static int minimum(int a,int b,int c) {
		if(a<=b&&a<=c)
			return a;
		else if(b<=a&&b<=c)
			return b;
		else
			return c;
	}
	
	public static void editDistance(String s1,String s2) {
		
		int insert=0,del=0,match=0,mismatch=0,i,j,m,n;
		m=s1.length();
		n=s2.length();
		int d[][]=new int[m+1][n+1];
		
		m=s1.length();
		n=s2.length();
		
		for(i=0;i<=m;i++)
		{
			for(j=0;j<=n;j++)
			{
				if(i>0&&j>0)
				{
					insert=d[i][j-1];
					del=d[i-1][j];
					match=d[i-1][j-1];
					mismatch=d[i-1][j-1];
				}
				
				if(i==0)
					d[i][j]=j;
				else if(j==0)
					d[i][j]=i;				
				else if(s1.charAt(i-1)==s2.charAt(j-1))
					d[i][j]=d[i-1][j-1];
				else
				d[i][j]=1+minimum(insert,del,mismatch);
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
	
//	public static void countDist(int i,int j) {
//		if(i==0 && j==0)
//			return;
//		if(i>0 && d[i][j]==d[i-1][j]+1)
//		{
//			countDist(i-1,j);
//			countDistance++;
//		}
//		else if(j>0 && d[i][j]==d[i][j-1]+1)
//		{
//			countDist(i,j-1);
//			countDistance++;
//		}
//		else
//		{
//			countDist(i-1,j-1);
//			countDistance++;
//		}
//	}

	public static void main(String[] args)throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		
		String s1,s2;
		
		s1=br.readLine();
		s2=br.readLine();
		editDistance(s1,s2);

	}

}
