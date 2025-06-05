/*
class of the node of the tree is as
class Node{
    int data;
    Node left;
    Node right;
    Node(int data){
        this.data = data;
        left=null;
        right=null;
    }
}

*/
class Solution {
    public static boolean isSymmetric(Node root) {
        // your code here;
        return isSymmetricUtil(root, root);
    }
    
    private static boolean isSymmetricUtil(Node root1, Node root2) {
        if(root1 == null && root2 == null){
            return true;
        }
        
        if(root1 == null || root2 == null){
            return false;
        }
        
        if(root1.data != root2.data){
            return false;
        }
        
        return isSymmetricUtil(root1.left, root2.right) && 
        isSymmetricUtil(root1.right, root2.left);
    }
}