using DriverCode;

class Solution {
    public int isSumProperty(Node root) {
        // code here
        return isChildSum(root) ? 1 : 0;
    }
    
    private bool isChildSum(Node root){
        if(root == null){
            return true;
        }
        
        if(root.left == null && root.right == null){
            return true;
        }
        
        var left = root?.left == null ? 0 : root.left.data;
        var right = root?.right == null ? 0 : root.right.data;
        
        if(left + right != root.data){
            return false;
        }
        
        return isChildSum(root.left) && isChildSum(root.right);
    }
}