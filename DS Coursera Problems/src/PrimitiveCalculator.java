//Primitive Calculator

import java.io.*;
import java.util.*;

public class PrimitiveCalculator {

	public static void main(String[] args)throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		
		int n,i;
		ArrayList<Integer> store=new ArrayList<>();
		n=Integer.parseInt(br.readLine());
		
		int t[]=new int[n+1];
		Arrays.fill(t, -1);
		
		t[1]=0;
		for(i=2;i<=n;i++) {
			t[i]=1+t[i-1];
			if(i%3==0)
				t[i]=Math.min(t[i], 1+t[i/3]);
			if(i%2==0)
				t[i]=Math.min(t[i], 1+t[i/2]);
		}
		
		int optimalStep;
		while(n>=1) {
			store.add(n);
			
			optimalStep=Math.min(1+t[n-1], Math.min(n%2!=0?1+t[n-1]:1+t[n/2], n%3!=0?1+t[n-1]:1+t[n/3]));
			if(optimalStep==1+t[n/3]) {
				n=n/3;
			}else if(optimalStep==1+t[n/2]) {
				n=n/2;
			}else {
				n=n-1;
			}
		}
		System.out.println(store.size()-1);
		for(i=store.size()-1;i>=0;i--)
			System.out.print(store.get(i)+" ");

	}

}
