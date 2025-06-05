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
    public IList<int> LargestValues(TreeNode root) {
        var res = new List<int>();
        LevelOrder(root, 0, res);

        return res;
    }

    private void LevelOrder(TreeNode root, int level, IList<int> res){
        if(root == null){
            return;
        }

        if(res.Count <= level){
            res.Add(root.val);
        }

        res[level] = Math.Max(res[level], root.val);

        LevelOrder(root.left, level + 1, res);
        LevelOrder(root.right, level + 1, res);
    }
}