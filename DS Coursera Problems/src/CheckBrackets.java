//Check Brackets using stack

import java.io.*;
import java.util.*;

public class CheckBrackets {
	
	public static void balancedBrackets(String s)
	{
		int len,i,flag=1,pos=-999;
		char ch,x;
		Stack<Character> stack=new Stack<>();
		len=s.length();
		
		for(i=0;i<len;i++)
		{
			ch=s.charAt(i);
			if(stack.empty())
				pos=i;
			if(ch=='['||ch=='('||ch=='{')
				stack.push(s.charAt(i));
			else
			{
				if(ch==']'||ch==')'||ch=='}')
				{
					if(stack.empty())
					{
						flag=0;
						break;
					}
					else
					{
						x=stack.pop();
						if((x=='['&&ch!=']')||(x=='('&&ch!=')')||(x=='{'&&ch!='}'))
						{
							flag=0;
							break;
						}
					}
				}
			}
		}
		
		if(flag==1&&stack.empty())
			System.out.println("Success");
		else
		{
			if(i>=len&&stack.empty()==false)
				System.out.println(pos+1);
			else
				System.out.println(i+1);
		}
	}

	public static void main(String[] args)throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		String s;
		s=br.readLine();
		
		balancedBrackets(s);

	}

}
