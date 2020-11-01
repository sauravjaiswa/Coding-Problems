//Check Brackets using stack

import java.io.*;
import java.util.*;

public class ExtendingStack {
	
	public static void checkCommands(String s[],int n)
	{
		int i,max=Integer.MIN_VALUE,maxpos=-1,x;
		String tmp[];
		Stack<Integer> stack=new Stack<>();
		
		for(i=0;i<n;i++)
		{
			tmp=s[i].split(" ");
			
			if(tmp[0].equals("push"))
			{
				x=Integer.parseInt(tmp[1]);
				if(stack.empty())
				{
					max=x;
					stack.push(x);
				}
				else
				{
					if(x>max)
					{
						stack.push((2*x)-max);
						max=x;
					}
					else
						stack.push(x);
				}
			}
			else if(tmp[0].equals("pop"))
			{
				if(stack.isEmpty()==false)
				{
					x=stack.pop();
					if(x>max)
						max=(2*max)-x;
				}
			}
			else if(tmp[0].equals("max"))
			{
				if(stack.isEmpty()==false)
					System.out.println(max);
			}
		}
	}

	public static void main(String[] args)throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		String s[];
		int n,i;
		n=Integer.parseInt(br.readLine());
		s=new String[n];
		for(i=0;i<n;i++)
			s[i]=br.readLine();
		
		checkCommands(s,n);
	}

}
