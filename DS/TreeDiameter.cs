/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left;
 *     public TreeNode right;
 *     public TreeNode(int val=0, TreeNode left=null, TreeNode right=null) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
public class Solution {
    public int DiameterOfBinaryTree(TreeNode root) {
        return Diameter(root);
    }

    private int Height(TreeNode root){
        if(root == null){
            return 0;
        }

        return 1 + Math.Max(Height(root.left), Height(root.right));
    }

    private int Diameter(TreeNode root){
        if(root == null){
            return 0;
        }

        var lh = Height(root.left);
        var rh = Height(root.right);

        var dl = Diameter(root.left);
        var dr = Diameter(root.right);

        return Math.Max(lh + rh, Math.Max(dl, dr));
    }
}