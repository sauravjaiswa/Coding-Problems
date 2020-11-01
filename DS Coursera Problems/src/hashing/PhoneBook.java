//Hashing

package hashing;

import java.io.*;
import java.util.*;


public class PhoneBook {
	
	private static FastScanner in;

	public static void main(String[] args)throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		in = new FastScanner();
		
		int n,i,pos;
		String query,temp[];
		n=in.nextInt();
		String contacts[]=new String[10000000];
		Arrays.fill(contacts, "not found");
		LinkedList<String> result=new LinkedList<>();
		
		for(i=1;i<=n;i++) {
			query=in.nextLine();
			temp=query.split(" ");
			pos=Integer.parseInt(temp[1]);
			
			if(temp[0].equals("add")) {
				contacts[pos]=temp[2];
			}else if(temp[0].equals("del")) {
				contacts[pos]="not found";
			}else {
				result.add(contacts[pos]);
			}
		}
		
		for(i=0;i<result.size();i++)
			System.out.println(result.get(i));
	}

	public static class FastScanner {
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
