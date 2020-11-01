//Hashing with Chains
package hashing;
import java.io.*;
import java.util.*;

public class HashingWithChains {
	
	public static int n,m,multiplier,prime;
	private static FastScanner in;
	private static PrintWriter out;
	
	public static int hashFunc(String s) {
        long hash = 0;
        for (int i = s.length() - 1; i >= 0; --i)
            hash = (hash * multiplier + s.charAt(i)) % prime;
        return (int)hash % m;
    }

	public static void main(String[] args)throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int i,j,pos;
		String query,temp[];
		
		multiplier=263;
		prime=1000000007;
		
		in = new FastScanner();
		
//		m=Integer.parseInt(br.readLine());
//		n=Integer.parseInt(br.readLine());
		m=in.nextInt();
		n=in.nextInt();
		
		LinkedList<String> li[]=new LinkedList[m];
		LinkedList<String> result=new LinkedList<>();
		
		for(i=1;i<=n;i++) {
//			query=br.readLine();
			query=in.nextLine();
			temp=query.split(" ");
			pos=hashFunc(temp[1]);
			
			if(temp[0].equals("add")) {
				
				if (li[pos]==null)
				     li[pos]=new LinkedList<String>();
				
				if(!(li[pos].contains(temp[1])))
					li[pos].add(0,temp[1]);
				
			}else if(temp[0].equals("del")) {
				
				if(li[pos]!=null&&li[pos].contains(temp[1]))
					li[pos].remove(temp[1]);
				
			}else if(temp[0].equals("find")) {
				
				if(li[pos]==null)
					result.add("no");
				else {
					if(li[pos].contains(temp[1]))
						result.add("yes");
					else
						result.add("no");
				}
				
			}else {
				pos=Integer.parseInt(temp[1]);
				if(li[pos]==null)
					result.add(" ");
				else {
					String str="";
					for(j=0;j<li[pos].size();j++) {
						str+=li[pos].get(j)+" ";
					}
					result.add(str.trim());
				}
			}
		}
		
		for(i=0;i<result.size();i++)
			System.out.println(result.get(i));

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
