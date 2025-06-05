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
    public TreeNode SortedArrayToBST(int[] nums) {
        TreeNode root = null;
        return MakeTree(nums, 0, nums.Length - 1, root);
    }

    private static TreeNode MakeTree(int[] nums, int start, int end, TreeNode root) {
        if(start > end){
            return null;
        }

        var mid = start + (end - start)/2;

        root = new TreeNode(nums[mid]);
        root.left = MakeTree(nums, start, mid - 1, root);
        root.right = MakeTree(nums, mid + 1, end, root);

        return root;
    }
}