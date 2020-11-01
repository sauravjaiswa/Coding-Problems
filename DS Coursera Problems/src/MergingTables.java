//Merging Tables using disjoint sets path compression
import java.io.*;
import java.util.*;

class Model1{
	int tableNumber;
	int totalRows;
	
	Model1(int tableNumber,int totalRows){
		this.tableNumber=tableNumber;
		this.totalRows=totalRows;
	}
}
public class MergingTables {
	
	public static int rank[];
	public static Model1 parent[];
	
	public static void makeSet(int i,int val) {
		parent[i]=new Model1(i,val);
		rank[i]=0;
	}
	
	public static Model1 find(int i) {
		if(i!=parent[i].tableNumber)
			parent[i]=find(parent[i].tableNumber);
		return parent[i];
	}
	
	public static void union(int i,int j) {
		int i_id,j_id;
		i_id=find(i).tableNumber;
		j_id=find(j).tableNumber;
		
		if(i_id==j_id)
			return;
		if(rank[i_id]>rank[j_id]) {
			parent[j_id].tableNumber=i_id;
			parent[i_id].totalRows+=parent[j_id].totalRows;
			parent[j_id].totalRows=0;
		}else {
			parent[i_id].tableNumber=j_id;
			parent[j_id].totalRows+=parent[i_id].totalRows;
			parent[i_id].totalRows=0;
			if(rank[i_id]==rank[j_id])
				rank[j_id]+=1;
		}
	}

	public static void main(String[] args)throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		
		int n,m,tables[],queries[][],i,maxPrev;
		String inp,temp[];
		
		inp=br.readLine();
		temp=inp.split(" ");
		
		n=Integer.parseInt(temp[0]);
		m=Integer.parseInt(temp[1]);
		
		inp=br.readLine();
		temp=inp.split(" ");
		
		tables=new int[n+1];
		queries=new int[m][2];
		for(i=1;i<=n;i++)
			tables[i]=Integer.parseInt(temp[i-1]);
		
		maxPrev=Arrays.stream(tables).max().getAsInt();
		
		for(i=0;i<m;i++) {
			inp=br.readLine();
			temp=inp.split(" ");
			queries[i][0]=Integer.parseInt(temp[0]);
			queries[i][1]=Integer.parseInt(temp[1]);
		}
		
		parent=new Model1[n+1];
		rank=new int[n+1];
		for(i=1;i<=n;i++) {
			makeSet(i,tables[i]);
		}
		
		for(i=0;i<m;i++) {
			union(queries[i][1],queries[i][0]);
			maxPrev=Math.max(find(queries[i][1]).totalRows,maxPrev);
			System.out.println(maxPrev);
		}
		
//		System.out.println(find(5).tableNumber+" "+find(5).totalRows);
	}

}
