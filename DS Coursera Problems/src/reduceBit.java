import java.io.*;
import java.math.*;

import com.sun.jdi.IntegerValue;

public class reduceBit 
{
	public static BigInteger mod=BigInteger.valueOf(998244353);
	
	public static BigInteger modInverse(BigInteger a, BigInteger m)
	{
		BigInteger m0=m;
		BigInteger y=BigInteger.valueOf(0);
		BigInteger x=BigInteger.valueOf(1);
		
		if(m.equals(BigInteger.valueOf(1)))
			return BigInteger.valueOf(0);
		
		while(a.compareTo(BigInteger.valueOf(1))>0)
		{
			BigInteger q=a.divide(m);
			BigInteger t=m;
			
			m=a.mod(m);
			a=t;
			t=y;
			
			y=x.subtract(q).multiply(y);
			x=t;
			
		}
		
		if(x.compareTo(BigInteger.valueOf(0))<0)
			x=x.add(m0);
		
		return x;
		
	}
	
	public static void main(String[] args)throws Exception
	{
		BigInteger t;
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		
		t= new BigInteger(br.readLine());
		
		while(!t.equals(BigInteger.valueOf(0)))
		{
			BigInteger i,j,k,l,m,n,c,p,q;
			BigInteger zero,one,zero_one,one_zero,four;
			String s;
			char last;
			c=BigInteger.valueOf(0);
			zero=BigInteger.valueOf(0);
			one=BigInteger.valueOf(0);
			zero_one=BigInteger.valueOf(0);
			one_zero=BigInteger.valueOf(0);
			four=BigInteger.valueOf(4);
			s=br.readLine();
			
			l=BigInteger.valueOf(s.length());
			
			if(l.equals(BigInteger.valueOf(1)))
				System.out.print("748683265 748683265 748683265 748683265\n");
			
			else {
				for(i=BigInteger.valueOf(0);i.compareTo(l)<0;i=i.add(BigInteger.valueOf(1)))
				{
					if(s.charAt(i.intValue())=='(' || s.charAt(i.intValue())==')' || s.charAt(i.intValue())=='#')
						continue;
					
					else if(s.charAt(i.intValue())=='&' && c.equals(BigInteger.valueOf(0)))
					{
						  four=four.multiply(BigInteger.valueOf(4));
				          zero=zero.add(BigInteger.valueOf(9));
				          one=one.add(BigInteger.valueOf(1));
				          zero_one=zero_one.add(BigInteger.valueOf(3));
				          one_zero=one_zero.add(BigInteger.valueOf(3));
				          
				          c=c.add(BigInteger.valueOf(1));
				          last='&';
					}
					
					else if(s.charAt(i.intValue())=='|' && c.equals(BigInteger.valueOf(0)))
					{
						  four=four.multiply(BigInteger.valueOf(4));
				          zero=zero.add(BigInteger.valueOf(1));
				          one=one.add(BigInteger.valueOf(9));
				          zero_one=zero_one.add(BigInteger.valueOf(3));
				          one_zero=one_zero.add(BigInteger.valueOf(3));
				          
				          c=c.add(BigInteger.valueOf(1));
				          last='|';
					}
					
					else if(s.charAt(i.intValue())=='^' && c.equals(BigInteger.valueOf(0)))
					{
						  four=four.multiply(BigInteger.valueOf(4));
				          zero=zero.add(BigInteger.valueOf(4));
				          one=one.add(BigInteger.valueOf(4));
				          zero_one=zero_one.add(BigInteger.valueOf(4));
				          one_zero=one_zero.add(BigInteger.valueOf(4));
				          
				          c=c.add(BigInteger.valueOf(1));
				          last='^';
					}
					
					else if(s.charAt(i.intValue())=='&' && c.compareTo(BigInteger.valueOf(0))>0)
					{
						  four=four.multiply(BigInteger.valueOf(4));
				          zero=(zero.multiply(BigInteger.valueOf(4))).add(one.multiply(BigInteger.valueOf(1))).add(zero_one.multiply(BigInteger.valueOf(2))).add(one_zero.multiply(BigInteger.valueOf(2)));
				          //one=one.add(BigInteger.valueOf(1));
				          zero_one=one.add(zero.multiply(one).multiply(BigInteger.valueOf(2)));
				          one_zero=zero_one;
				          
				          //c=c.add(BigInteger.valueOf(1));
				          last='&';
					}
					
					else if(s.charAt(i.intValue())=='|' && c.compareTo(BigInteger.valueOf(0))>0)
					{
						  four=four.multiply(BigInteger.valueOf(4));
				          one=(one.multiply(BigInteger.valueOf(4))).add(zero.multiply(BigInteger.valueOf(1))).add(zero_one.multiply(BigInteger.valueOf(2))).add(one_zero.multiply(BigInteger.valueOf(2)));
				          //one=one.add(BigInteger.valueOf(1));
				          zero_one=zero.add(zero_one.multiply(BigInteger.valueOf(2)));
				          one_zero=zero_one;
				          
				          //c=c.add(BigInteger.valueOf(1));
				          last='|';
					}
					
					else if(s.charAt(i.intValue())=='^' && c.compareTo(BigInteger.valueOf(0))>0)
					{
						  four=four.multiply(BigInteger.valueOf(4));
				          zero=(zero.multiply(BigInteger.valueOf(4)));
				          one=one.multiply(BigInteger.valueOf(4));
				          zero_one=(zero_one.multiply(BigInteger.valueOf(4)));
				          one_zero=(one_zero.multiply(BigInteger.valueOf(4)));
				          //c=c.add(BigInteger.valueOf(1));
				          last='&';
					}
				}
				
				four=modInverse(four,mod);
			    one=(one.multiply(four)).mod(mod);
			    zero=(zero.multiply(four)).mod(mod);
			    zero_one=(zero_one.multiply(four)).mod(mod);
			    one_zero=(one_zero.multiply(four)).mod(mod);
			    System.out.print(zero+" "+one+" "+zero_one+" "+one_zero+"\n");
			}
			
			
			
		}
	}

}
