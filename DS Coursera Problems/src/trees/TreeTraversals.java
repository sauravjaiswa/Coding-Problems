package trees;

import java.io.*;
import java.util.*;

class TreeNode{
	int data;
	TreeNode left,right;
	
	TreeNode(int data){
		this.data=data;
		left=right=null;
	}
}

public class TreeTraversals {
	public static TreeNode root;
	
	public static TreeNode insertTree(int arr[],TreeNode root,int i) {
		if(i<arr.length) {
			TreeNode temp=new TreeNode(arr[i]);
			root=temp;
			
			root.left=insertTree(arr,root.left,2*i+1);
			root.right=insertTree(arr,root.right,2*i+2);
		}
		return root;
	}
	
	public static void inorder(TreeNode root) {
		Stack<TreeNode> s=new Stack<>();
		TreeNode temp=root;
		while(true) {
			while(temp!=null) {
				s.push(temp);
				temp=temp.left;
			}
			if(s.isEmpty())
				break;
			
			temp=s.pop();
			System.out.println(temp.data);
			temp=temp.right;
		}
	}
	
	public static void preorder(TreeNode root) {
		Stack<TreeNode> s=new Stack<>();
		TreeNode temp=root;
		
		while(true) {
			while(temp!=null) {
				System.out.println(temp.data);
				s.push(temp);
				temp=temp.left;
			}
			
			if(s.isEmpty())
				break;
			
			temp=s.pop();
			temp=temp.right;
		}
	}
	
	public static void postorder(TreeNode root) {
		Stack<TreeNode> s=new Stack<>();
		TreeNode temp=root;
		TreeNode prev=null;
		do {
			while(temp!=null) {
				s.push(temp);
				temp=temp.left;
			}
			while(temp==null&&!s.isEmpty()) {
				temp=s.peek();
				if(temp.right==null||temp.right==prev) {
					System.out.println(temp.data);
					s.pop();
					prev=temp;
					temp=null;
				}else {
					temp=temp.right;
				}
			}
		}while(!s.isEmpty());
	}
	
	public static void levelorder(TreeNode root) {
		TreeNode temp=root;
		Queue<TreeNode> q=new LinkedList<>();
		
		if(temp==null)
			return;
		
		q.add(temp);
		while(!q.isEmpty()) {
			temp=q.remove();
			System.out.println(temp.data);
			if(temp.left!=null)
				q.add(temp.left);
			if(temp.right!=null)
				q.add(temp.right);
		}
	}
	
	public static void maxElement(TreeNode root) {
		TreeNode temp=root;
		int max=Integer.MIN_VALUE;
		Queue<TreeNode> q=new LinkedList<>();
		q.add(temp);
		
		while(!q.isEmpty()) {
			temp=q.remove();
			if(temp.data>max)
				max=temp.data;
			
			if(temp.left!=null)
				q.add(temp.left);
			if(temp.right!=null)
				q.add(temp.right);
		}
		System.out.println(max);
	}
	
	public static void insertElement(TreeNode root,int val) {
		TreeNode temp=root;
		Queue<TreeNode> q=new LinkedList<>();
		if(temp==null) {
			root=new TreeNode(val);
			return;
		}
		
		q.add(temp);
		while(!q.isEmpty()) {
			temp=q.remove();
			
			if(temp.left!=null)
				q.add(temp.left);
			else {
				temp.left=new TreeNode(val);
				break;
			}
			
			if(temp.right!=null)
				q.add(temp.right);
			else {
				temp.right=new TreeNode(val);
				break;
			}
		}
	}
	
	public static void reverseOrder(TreeNode root) {
		TreeNode temp=root;
		Queue<TreeNode> q=new LinkedList<>();
		Stack<TreeNode> s=new Stack<>();
		
		q.add(temp);
		while(!q.isEmpty()) {
			temp=q.remove();
			if(temp.left!=null)
				q.add(temp.left);
			if(temp.right!=null)
				q.add(temp.right);
			s.add(temp);
		}
		while(!s.isEmpty()) {
			System.out.println(s.pop().data);
		}
	}
	
	public static void deleteTree(TreeNode root) {
		TreeNode temp=root;
		Queue<TreeNode> q=new LinkedList<>();
		
		q.add(temp);
		while(!q.isEmpty()) {
			temp=q.remove();
			if(temp.left!=null)
				q.add(temp.left);
			if(temp.right!=null)
				q.add(temp.right);
			
		}
		System.out.println(root);
	}

	public static void main(String[] args)throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int n,arr[],i;
		
		n=Integer.parseInt(br.readLine());
		arr=new int[n];

		for(i=0;i<n;i++)
			arr[i]=Integer.parseInt(br.readLine());
		
		root=insertTree(arr,root,0);
		System.out.println("Inorder");
		inorder(root);
		System.out.println("Preorder");
		preorder(root);
		System.out.println("Postorder");
		postorder(root);
		System.out.println("Level order");
		levelorder(root);
		System.out.println("Maximum element is");
		maxElement(root);
		System.out.println("Level order after inserting 8");
		insertElement(root,8);
		levelorder(root);
		System.out.println("Reverse order:");
		reverseOrder(root);
		
		System.out.println("Deleted Tree:");
		deleteTree(root);
	}

}
