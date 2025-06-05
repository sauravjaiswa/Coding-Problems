// Online C# Editor for free
// Write, Edit and Run your C# code using C# Online Compiler
/*
Given the root of a binary search tree, and an integer k, return the kth smallest value (1-indexed) of all the values of the nodes in the tree.

Example 1:
Input: root = [3,1,4,null,2], k = 1
Output: 1

Example 2:
Input: root = [5,3,6,2,4,null,null,1], k = 3
Output: 3

Constraints:
The number of nodes in the tree is n.
1 <= k <= n <= 104
0 <= Node.val <= 104

Follow up: If the BST is modified often (i.e., we can do insert and delete operations) and you need to find the kth smallest frequently, how would you optimize?
*/

using System;
using System.Collections.Generic;

public class TreeNode {
    public int val;
    public TreeNode left, right;

    public TreeNode(int value) {
        val = value;
        left = null;
        right = null;
    }
}

public class HelloWorld
{
    public static void Main(string[] args)
    {
        TreeNode root = new TreeNode(3);
        root.left = new TreeNode(1);
        root.right = new TreeNode(4);

        //root.left.left = new TreeNode(7);
        root.left.right = new TreeNode(2);

        /*root.right.right = new TreeNode(2);

        root.left.left.left = new TreeNode(17);
        root.left.left.right = new TreeNode(23);

        root.left.right.left = new TreeNode(27);
        root.left.right.right = new TreeNode(3);

        root.right.right.left = new TreeNode(8);
        root.right.right.right = new TreeNode(11);*/

        Console.WriteLine(KthSmallest(root, 2));
    }
    
    public static int KthSmallest(TreeNode root, int k) {
        var ls = new List<int>();
        
        FindKthSmallest(root, ls, k);
        
        return ls[k - 1];
    }
    
    public static void FindKthSmallest(TreeNode root, List<int> ls, int k) {
        if(root == null || k == 0){
            return;
        }
        
        FindKthSmallest(root.left, ls, k--);
        ls.Add(root.val);
        FindKthSmallest(root.right, ls, k--);
    }
}