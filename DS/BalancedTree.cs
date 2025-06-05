// public class Node{
//     public int data;
//     public Node left;
//     public Node right;

//    public Node(int x){
//        data = x;
//        left = right = null;
//    }

//}
class Solution {
    public bool isBalanced(Node root) {
        // Code here
        if(root == null){
            return true;
        }
        
        var lh = Height(root.left);
        var rh = Height(root.right);
        
        if(Math.Abs(lh - rh) > 1){
            return false;
        }
        
        return isBalanced(root.left) && isBalanced(root.right);
    }
    
    private int Height(Node root){
        if(root == null){
            return 0;
        }
        
        var lh = Height(root.left);
        var rh = Height(root.right);
        
        return 1 + Math.Max(lh, rh);
    }
}