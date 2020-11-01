//BST
package binary_search_trees;

import java.io.*;
import java.util.*;

public class BST {
	
	public static int key[],left[],right[];
	
//	public static void inorder(int i) {
//		if(i==-1)
//			return;
//		inorder(left[i]);
//		answer.add(key[i]);
//		inorder(right[i]);
//	}
//	
//	public static boolean isBSTValid() {
//		inorder(0);
//		int i;
//		for(i=0;i<answer.size()-1;i++) {
//			if(answer.get(i+1)<=answer.get(i))
//				return false;
//		}
//		return true;
//	}
	
	public static boolean isBSTValid(int i,int l,int r) {
		if(i==-1)
			return true;
		if(l!=-1&&key[i]<=key[l])
			return false;
		if(r!=-1&&key[i]>=key[r])
			return false;
		return (isBSTValid(left[i],l,i)&&isBSTValid(right[i],i,r));
	}
		
	public static void main(String[] args)throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int n,i,j;
		String inp,temp[];
		
		n=Integer.parseInt(br.readLine());
		key=new int[n];
		left=new int[n];
		right=new int[n];
		
		for(i=0;i<n;i++) {
			inp=br.readLine();
			temp=inp.split(" ");
			
			key[i]=Integer.parseInt(temp[0]);
			left[i]=Integer.parseInt(temp[1]);
			right[i]=Integer.parseInt(temp[2]);
		}
		
		boolean flag=true;
		
		if(n>0)
		flag=isBSTValid(0,-1,-1);
		
		if(flag==true)
			System.out.println("CORRECT");
		else
			System.out.println("INCORRECT");
	}

}
