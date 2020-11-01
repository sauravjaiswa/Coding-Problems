//Implementing Disjoint Sets

import java.io.*;
import java.util.*;

public class DisjointSets {
	
	public static int parent[],rank[],n;
	public static void makeSet(int i) {
		parent[i]=i;
		rank[i]=0;
	}
	
	public static int find(int i) {
		return parent[i];
		
//		while(i!=parent[i])			//Normal efficient approach for building trees to store disjoint sets-Rank heuristic
//			i=parent[i];
//		return i;
		
//		if(i!=parent[i])			//More efficient approach using Path compression
//			i=find(parent[i]);
//		return i;
	}
	
	public static void union(int i,int j) {
		int i_id,j_id;
//		i_id=find(i);
//		j_id=find(j);
//		
//		if(i_id==j_id)
//			return;
//		if(rank[i_id]>rank[j_id])
//			parent[j_id]=i_id;
//		else {
//			parent[i_id]=j_id;
//			if(rank[i_id]==rank[j_id])
//				rank[j_id]=rank[j_id]+1;
//		}
		
		//Array approach
		i_id=find(i);
		j_id=find(j);
		if (i_id == j_id)
		return;
		int m=Math.min(i_id , j_id );
		for (int k=1;k<=n;k++)
		{
			if((parent[k]>=i_id &&parent[k]<=j_id)||(parent[k]>=j_id &&parent[k]<=i_id))
				parent[k]=m;
		}
	}

	public static void main(String[] args)throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		
		n=Integer.parseInt(br.readLine());
		parent=new int[n+1];
		rank=new int[n+1];
			  
		int i;
//		for(i=1;i<=n;i++)
//			makeSet(i);
//		for(i=1;i<=30;i++)
//			union(i,2*i);
//		for(i=1;i<=20;i++)
//			union(i,3*i);
//		for(i=1;i<=12;i++)
//			union(i,5*i);
//		for(i=1;i<=n;i++)
//			System.out.println(find(i));
//		
//		for(i=1;i<=n;i++)
//			System.out.print(parent[i]+" ");
		
		for(i=1;i<=12;i++)
			  makeSet(i);
		union(2, 10);
		union(7, 5);
		union(6, 1);
		union(3, 4);
		union(5, 11);
		union(7, 8);
		union(7, 3);
		union(12, 2);
		union(9, 6);
		System.out.println(find(6));
		System.out.println(find(3));
		System.out.println(find(11));
		System.out.println(find(9));

	}

}
