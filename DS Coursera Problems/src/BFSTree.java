import java.io.*;
import java.util.*;

public class BFSTree {
	
	int N;
	static LinkedList<Integer> adj[];
	
	public BFSTree(int n){
		N=n;
		adj=new LinkedList[n];
		for (int i=0; i<n; ++i) 
            adj[i]=new LinkedList();
	}
	
//	public static void BFS(int root) {
//		int height=0;
//		LinkedList<Integer> queue=new LinkedList();
//		
//		queue.add(root);
//		
//		while(!queue.isEmpty()) {
//			
//			root=queue.poll();
//			System.out.println(root);
//			
//			Iterator<Integer> i=adj[root].listIterator();
//			while(i.hasNext()) {
//				
//				int v=i.next();
//				queue.add(v);
//			}
//		}
//		System.out.println(height);
//	}
	
	public static void BFSModified(int root) {
		int height=0,nodeCount;
		LinkedList<Integer> queue=new LinkedList();
		
		queue.add(root);
		
		while(true) {
			nodeCount=queue.size();
			
			if(nodeCount==0)
			{
				System.out.println(height);
				break;
			}
			
			height++;
			while(nodeCount>0) {
				root=queue.poll();
//				System.out.println(root);
				
				Iterator<Integer> i=adj[root].listIterator();
				while(i.hasNext()) {
					int v=i.next();
					queue.add(v);
				}
				nodeCount--;
			}
		}
	}

	public static void main(String[] args)throws Exception {
		// TODO Auto-generated method stub
		
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int n,a[],i,root=0;
		
		n=Integer.parseInt(br.readLine());
		a=new int[n];
		
		String inp=br.readLine();
		String tmp[]=inp.split(" ");
		
		BFSTree tree=new BFSTree(n);
		
		for(i=0;i<n;i++)
		{
			a[i]=Integer.parseInt(tmp[i]);
			if(a[i]==-1)
				root=i;
			else
				adj[a[i]].push(i);
		}
		
		tree.BFSModified(root);

	}

}
