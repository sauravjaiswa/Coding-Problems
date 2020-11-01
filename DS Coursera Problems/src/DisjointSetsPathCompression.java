//Implementing Disjoint sets using path compression
import java.io.*;
import java.util.*;

public class DisjointSetsPathCompression {

	public static int parent[],rank[],n;
	public static void makeSet(int i) {
		parent[i]=i;
		rank[i]=0;
	}
	
	public static int find(int i) {
		if(i!=parent[i])
			parent[i]=find(parent[i]);
		return parent[i];
	}
	
	public static void union(int i,int j) {
		int i_id,j_id;
		i_id=find(i);
		j_id=find(j);
		
		if(i_id==j_id)
			return;
		if(rank[i_id]>rank[j_id]) {
			parent[j_id]=i_id;
		}else {
			parent[i_id]=j_id;
			if(rank[i_id]==rank[j_id])
				rank[j_id]+=1;
		}
	}
	
	public static void main(String[] args)throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		
		int i;
		
		n=Integer.parseInt(br.readLine());
		parent=new int[12+1];
		rank=new int[12+1];
		
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
