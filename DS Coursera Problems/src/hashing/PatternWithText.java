//Pattern With Text
//Using Rabin Karp's Algorithm
package hashing;
import java.io.*;
import java.util.*;

public class PatternWithText {
	
	private static FastScanner in;
	public static String p,t;
	public static int multiplier,prime;
	
	public static int createHashFunc(String s) {
		long hash=0;
		for(int i=s.length()-1;i>=0;i--) {
			hash = ((hash * multiplier + s.charAt(i)) % prime+prime)%prime;
		}
		return (int)hash;
	}
	
	public static long[] recreateHashFunc(String t,String p) {
//		long newHash=oldHash-s.charAt(old);
//		newHash=(newHash*multiplier+s.charAt(newInd))%prime;
//		return (int)newHash;
		
		int tLen=t.length();
		int pLen=p.length();
		int i;
		
		long h[]=new long[tLen-pLen+1];
		String s=t.substring(tLen-pLen,tLen);
		h[tLen-pLen]=createHashFunc(s);
		long y=1;
		for(i=0;i<pLen;i++)
			y=((y*multiplier)%prime+prime)%prime;
		for(i=tLen-pLen-1;i>=0;i--)
			h[i]=((((multiplier*h[i+1])+t.charAt(i)-(y*t.charAt(i+pLen)))%prime)+prime)%prime;
		return h;
	}
	
	public static void rabinKarp(String t,String p) {
		int pLen,tLen,i;
		int pHash;
		List<Integer> positions=new ArrayList<>();
		
		pLen=p.length();
		tLen=t.length();
		pHash=createHashFunc(p);
		long h[]=recreateHashFunc(t,p);
		
		for(i=0;i<tLen-pLen+1;i++) {
//			System.out.println(pHash+" "+h[i]);
			if(pHash==h[i]) {
//				System.out.println(pHash+" "+h[i]);
				if(t.substring(i,i+pLen).equals(p))
					positions.add(i);
			}
			
		}
		
		for(i=0;i<positions.size();i++)
		System.out.print(positions.get(i)+" ");
	}

	public static void main(String[] args)throws Exception {
		// TODO Auto-generated method stub
		in = new FastScanner();
		
		prime=100000007;
		multiplier=((int)Math.random()*(prime-1));		//Number of characters in input alphabets
		
		p=in.nextLine();
		t=in.nextLine();
		
		rabinKarp(t,p);
	}
	
	static class FastScanner {
        private BufferedReader reader;
        private StringTokenizer tokenizer;

        public FastScanner() {
            reader = new BufferedReader(new InputStreamReader(System.in));
            tokenizer = null;
        }

        public String next() throws IOException {
            while (tokenizer == null || !tokenizer.hasMoreTokens()) {
                tokenizer = new StringTokenizer(reader.readLine());
            }
            return tokenizer.nextToken();
        }
        
        public String nextLine()throws Exception
        { 
            String str = ""; 
            try
            { 
                str = reader.readLine(); 
            } 
            catch (IOException e) 
            { 
                e.printStackTrace(); 
            } 
            return str; 
        } 

        public int nextInt() throws IOException {
            return Integer.parseInt(next());
        }
    }

}
