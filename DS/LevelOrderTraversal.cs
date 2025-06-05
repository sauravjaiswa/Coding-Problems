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

public class LevelOrderTraversal
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

        List<List<int>> res = LevelOrder(root);

        foreach (var level in res) {
            Console.Write("[");
            for (int i = 0; i < level.Count; i++) {
                Console.Write(level[i]);
                if (i < level.Count - 1) Console.Write(", ");
            }
            Console.Write("] ");
        }
    }
    
    private static List<List<int>> LevelOrder(Node root) {
        var res = new List<List<int>>();

        Bfs(root, 0, res);
        return res;
    }
    
    private static void Bfs(Node root, int level, List<List<int>> res) {
        if(root == null) {
            return;
        }
        
        if(res.Count <= level) {
            res.Add(new List<int>());
        }
        
        res[level].Add(root.data);
        
        Bfs(root.left, level + 1, res);
        Bfs(root.right, level + 1, res);
    }
}