import java.io.*;
import java.util.*;

public class MaximumInSlidingWindow {

//	static LinkedList<Integer> queue1=new LinkedList();
	static LinkedList<Integer> queue2=new LinkedList();
	
	public static void main(String[] args)throws Exception {
		// TODO Auto-generated method stub
		
		int n,m,a[],i,max;
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		
		n=Integer.parseInt(br.readLine());
		a=new int[n];
		
		String tmp=br.readLine();
		String inp[]=tmp.split(" ");
		for(i=0;i<n;i++)
		{
			a[i]=Integer.parseInt(inp[i]);
//			queue1.add(a[i]);
		}
		
		m=Integer.parseInt(br.readLine());
		
		for(i=0;i<n;i++)
		{
			if((i+1)>=m)
			{
				queue2.add(a[i]);
				max=Collections.max(queue2);
				System.out.println(max);
				queue2.poll();
			}else if((i+1)<m) {
				queue2.add(a[i]);
			}
		}

	}

}
