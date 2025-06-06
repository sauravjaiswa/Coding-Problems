class Solution {
    // Function to check whether a Binary Tree is BST or not.
    boolean isBST(Node root) {
        // code here.
        return check(root, int32.MinValue, int32.MaxValue);
    }
    
    private boolean check(Node root, int min, int max){
        if(root == null){
            return true;
        }
        
        if(root.data < min || root.data > max){
            return false;
        }
        
        return check(root.left, min, root.data - 1) && check(root.right, root.data + 1, max);
    }
}