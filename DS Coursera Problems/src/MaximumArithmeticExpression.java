//Maximum Value of Arithmetic Exp-Matrix Chain Multiplication
import java.io.*;
import java.util.*;

public class MaximumArithmeticExpression {
	
	public static long calculate(long a,long b,char op)
	{
		switch(op) 
		{
		case '*':
			return a*b;
		case '+':
			return a+b;
		case '-':
			return a-b;
		default:
			return -999999999;
		}
//		if (op == '*')
//		    return a * b;
//		else if (op == '+')
//		    return a + b;
//		else if (op == '-')
//		    return a - b;
//		else
//			assert(false);
	}
	
	public static void maxExpValue(String exp)
	{
		LinkedList<Long> operands=new LinkedList<>();
		LinkedList<Character> operators=new LinkedList<>();
		
		int i,j,k,l;
		long a,b,c,d;
		String tmp="";
		
		for(i=0;i<exp.length();i++)
		{
			if(exp.charAt(i)=='+'||exp.charAt(i)=='-'||exp.charAt(i)=='*'||exp.charAt(i)=='/')
			{
				operators.add(exp.charAt(i));
				operands.add(Long.parseLong(tmp));
				tmp="";
			}
			else
				tmp=tmp+exp.charAt(i);
		}
		operands.add(Long.parseLong(tmp));
		
		int len=operands.size();
		
		long min[][]=new long[len][len];
		long max[][]=new long[len][len];
		
		for(i=0;i<len;i++)
		{
			for(j=0;j<len;j++)
			{
				min[i][j]=Long.MAX_VALUE;
				max[i][j]=Long.MIN_VALUE;
				
				if(i==j)
					min[i][j]=max[i][j]=operands.get(i);
			}
		}
		
		for(l=0;l<len;l++)
		{
			for(i=0;i<len-l-1;i++)
			{
				j=i+l+1;
				long minVal=Long.MAX_VALUE;
				long maxVal=Long.MIN_VALUE;
				
				for(k=i;k<j;k++)
				{
					a=calculate(min[i][k],min[k+1][j],operators.get(k));
					b=calculate(min[i][k],max[k+1][j],operators.get(k));
					c=calculate(max[i][k],min[k+1][j],operators.get(k));
					d=calculate(max[i][k],max[k+1][j],operators.get(k));
					
					minVal=Math.min(minVal, Math.min(a, Math.min(b, Math.min(c, d))));
					maxVal=Math.max(maxVal, Math.max(a, Math.max(b, Math.max(c, d))));
				}
				min[i][j]=minVal;
				max[i][j]=maxVal;
			}
		}
		
//		for(i=0;i<len;i++)
//		{
//			for(j=0;j<len;j++)
//				System.out.print(max[i][j]+" ");
//			System.out.println();
//		}
		System.out.println(max[0][len-1]);
	}
	

	public static void main(String[] args)throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		
		String exp;
		exp=br.readLine();
		
		maxExpValue(exp);

	}

}
