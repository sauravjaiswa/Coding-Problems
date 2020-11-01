//Insert of elements in binary tree at the first empty space found

package trees;
import java.io.*;
import java.util.*;

public class InsertionBinaryTree {
	
	public static class Node{
		int key;
		Node left,right;
		
		Node(int key){
			this.key=key;
			left=null;
			right=null;
		}
	}
	
	public static Node root;
	
	public static void inorder(Node root) {
		Node temp=root;
		if(temp==null)
			return;
		
		inorder(root.left);
		System.out.print(root.key+" ");
		inorder(root.right);
	}
	
	public static void insert(Node root,int val) {
		Node temp=root;
		
		Queue<Node> q=new LinkedList<Node>();
		q.add(root);
		
		while(!q.isEmpty()) {
			temp=q.poll();
			
			if(temp.left==null) {
				temp.left=new Node(val);
				break;
			}else
				q.add(temp.left);
			
			if(temp.right==null) {
				temp.right=new Node(val);
				break;
			}else
				q.add(temp.right);
		}
	}

	public static void main(String[] args)throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		
		root = new Node(10); 
        root.left = new Node(11); 
        root.left.left = new Node(7); 
        root.right = new Node(9); 
        root.right.left = new Node(15); 
        root.right.right = new Node(8); 
       
        System.out.print( "Inorder traversal before insertion:"); 
        inorder(root); 
       
        int key = 12; 
        insert(root, key); 
       
        System.out.print("\nInorder traversal after insertion:"); 
        inorder(root); 

	}

}
