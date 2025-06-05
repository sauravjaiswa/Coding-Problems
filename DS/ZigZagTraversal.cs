// Online C# Editor for free
// Write, Edit and Run your C# code using C# Online Compiler

using System;
using System.Collections.Generic;

class Node {
    public int data;
    public Node left, right;

    public Node(int value) {
        data = value;
        left = null;
        right = null;
    }
}

public class ZigZagTraversal
{
    public static void Main(string[] args)
    {
        Node root = new Node(5);
        root.left = new Node(12);
        root.right = new Node(13);

        root.left.left = new Node(7);
        root.left.right = new Node(14);

        root.right.right = new Node(2);

        root.left.left.left = new Node(17);
        root.left.left.right = new Node(23);

        root.left.right.left = new Node(27);
        root.left.right.right = new Node(3);

        root.right.right.left = new Node(8);
        root.right.right.right = new Node(11);

        List<List<int>> res = ZigZagTraversal(root);

        foreach (var level in res) {
            Console.Write("[");
            for (int i = 0; i < level.Count; i++) {
                Console.Write(level[i]);
                if (i < level.Count - 1) Console.Write(", ");
            }
            Console.Write("] ");
        }
    }
    
    private static int FindTreeHeight(Node root) {
        if(root == null){
            return 0;
        }
        
        var lHt = FindTreeHeight(root.left);
        var rHt = FindTreeHeight(root.right);
        
        return Math.Max(lHt, rHt) + 1;
    }
    
    private static void LeftToRight(Node root, int level, List<int> ans) {
        if(root == null) {
            return;
        }
        
        if(level == 1){
            ans.Add(root.data);
        }
        else {
            LeftToRight(root.left, level - 1, ans);
            LeftToRight(root.right, level - 1, ans);
        }
    }
    
    private static void RightToLeft(Node root, int level, List<int> ans) {
        if(root == null) {
            return;
        }
        
        if(level == 1){
            ans.Add(root.data);
        }
        else {
            RightToLeft(root.right, level - 1, ans);
            RightToLeft(root.left, level - 1, ans);
        }
    }
    
    private static List<List<int>> ZigZagTraversal(Node root) {
        var height = FindTreeHeight(root);
        var res = new List<List<int>>();
        
        if(root == null) {
            return res;
        }
        
        for(var i = 1; i <= height; i++){
            var ans = new List<int>();
            if(i % 2 != 0) {
                LeftToRight(root, i, ans);
            }
            else {
                RightToLeft(root, i, ans);
            }
            
            res.Add(ans);
        }
        
        return res;
    }
}