//Maximum Tree Height using vectors

import java.io.*;
import java.util.*;

public class MaxTreeHeight {

	public static void main(String[] args)throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		
		int i,n,a[],root=0,height;
		String s,tmpStr[];
		n=Integer.parseInt(br.readLine());
		s=br.readLine();
		tmpStr=s.split(" ");
		a=new int[n];
		LinkedList<Integer> nodes[]=new LinkedList[n];
		
		for(i=0;i<n;i++)
		{
			a[i]=Integer.parseInt(tmpStr[i]);
			if(a[i]!=-1)
				nodes[a[i]]=new LinkedList();
		}
		
		Queue<Integer> child=new LinkedList<>();
		for(i=0;i<n;i++)
		{
			if(a[i]==-1)
				root=i;
			else
			{
				
				nodes[a[i]].add(i);
			}
		}
		
		height=0;
		child.offer(root);
		int count,x;
		
		while(true)
		{
			count=child.size();
			if(count==0)
			{
				System.out.println(height);
				break;
			}
			height=height+1;
			while(count>0)
			{
				x=child.poll();
				System.out.println(nodes[x].size());
				if(nodes[x].size()>0)
				{
					for(i=0;i<nodes[x].size();i++)
						child.offer(nodes[x].get(i));
				}
				
				count--;
			}
		}
	}

}
