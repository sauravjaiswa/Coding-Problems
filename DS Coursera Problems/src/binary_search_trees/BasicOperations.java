//Basic Operations-Find,Next,Insert,Delete
package binary_search_trees;

import java.io.*;
import java.util.*;

class Tree{
	int key;
	Tree left,right;
	Tree(int key){
		this.key=key;
		this.left=null;
		this.right=null;
	}
}

public class BasicOperations {
	
	public static Tree root=null;
	
	public static void insert(int key) { 
       root = insertRec(root, key); 
    }
	
	public static Tree insertRec(Tree root, int key) { 
  
        if (root == null) { 
            root=new Tree(key); 
            return root; 
        } 
  
        if(key<root.key) 
            root.left=insertRec(root.left, key); 
        else if (key > root.key) 
            root.right=insertRec(root.right, key); 
  
        return root; 
    } 
	
	public static Tree find(Tree root,int key) {
		if(root.key==key)
			return root;
		else if(key<root.key) {
			if(root.left==null)
				return root;
			return find(root.left,key);
		}
		
		if(root.right==null)
			return root;
		return find(root.right,key);
	}
	
	public static Tree nextLargest(Tree root) {
		if(root.right!=null) {
			return leftDescendant(root.right);
		}else {
			return rightAncestor(root);
		}
	}
	
	public static Tree leftDescendant(Tree root) {
		if(root.left==null)
			return root;
		else
			return leftDescendant(root.left);
	}
	
	public static Tree rightAncestor(Tree root) {
		if(root.left==null)
			return root;
		else
			return leftDescendant(root.left);
	}

	public static void main(String[] args)throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		
        /* Let us create following BST 
              50 
           /     \ 
          30      70 
         /  \    /  \ 
       20   40  60   80 */
        insert(50); 
        insert(30); 
        insert(20); 
        insert(40); 
        insert(70); 
        insert(60); 
        insert(80); 
		
        System.out.println(find(root,65).key);

	}

}
