//Binary Tree Traversals
package binary_search_trees;

import java.io.*;
import java.util.*;

public class BinaryTreeTraversals {
	
	public static int key[],left[],right[];
	public static List<Integer> answer;
		
	public static void inorder(int i) {
		if(i==-1)
			return;
		inorder(left[i]);
		answer.add(key[i]);
		inorder(right[i]);
		
//		if(i==-1)
//			return;
//		Stack<Integer> s=new Stack<>();
//		
//		while(i!=-1||s.size()>0) {
//			
//			while(i!=-1) {
//				s.push(i);
//				i=left[i];
//			}
//			i=s.pop();
//			answer.add(key[i]);
//			i=right[i];
//		}
	}
	
	public static void preorder(int i) {
		if(i==-1)
			return;
		answer.add(key[i]);
		preorder(left[i]);
		preorder(right[i]);
		
//		if(i==-1)
//			return;
//		Stack<Integer> s=new Stack<>();
//		
//		s.push(i);
//		while(!s.isEmpty()) {
//			
//			i=s.pop();
//			answer.add(key[i]);
//			if(right[i]!=-1)
//				s.push(right[i]);
//			if(left[i]!=-1)
//				s.push(left[i]);
//		}
	}
	
	public static void postorder(int i) {
		if(i==-1)
			return;
		postorder(left[i]);
		postorder(right[i]);
		answer.add(key[i]);
		
//		if(i==-1)
//			return;
//		Stack<Integer> s1=new Stack<>();
//		Stack<Integer> s2=new Stack<>();
//		
//		s1.push(i);
//		while(!s1.isEmpty()) {
//			i=s1.pop();
//			s2.push(i);
//			if(left[i]!=-1)
//				s1.push(left[i]);
//			if(right[i]!=-1)
//				s1.push(right[i]);
//		}
		
//		while(!s2.isEmpty()) {
//			i=s2.pop();
//			answer.add(key[i]);
//		}
	}
	
	public static void printOrder() {
		int i;
		for(i=0;i<answer.size();i++)
			System.out.print(answer.get(i)+" ");
		System.out.println();
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
		
		new Thread(null, new Runnable() {
            public void run() {
                try {
                    new BinaryTreeTraversals().run();
                } catch (IOException e) {
                }
            }
        }, "1", 1 << 26).start();
		
		
	}
	
	public void run() throws IOException {
		answer=new LinkedList<>();
		inorder(0);
		printOrder();
		
		answer=new LinkedList<>();
		preorder(0);
		printOrder();
		
		answer=new LinkedList<>();
		postorder(0);
		printOrder();
	}

}
