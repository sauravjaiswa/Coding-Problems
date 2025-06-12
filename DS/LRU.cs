// Online C# Editor for free
// Write, Edit and Run your C# code using C# Online Compiler

using System;
using System.Collections.Generic;

public class Node
{
    public int key;
    public int val;
    public Node prev;
    public Node next;
    
    public Node(int key, int val){
        this.key = key;
        this.val = val;
        this.prev = this.next = null;
    }
}

public class LRU
{
    private Node start;
    private Node end;
    private readonly int capacity;
    private readonly Dictionary<int, Node> cache;
    
    public LRU(int capacity)
    {
        this.capacity = capacity;
        this.start = new Node(-1, -1);
        this.end = new Node(-1, -1);
        this.start.next = this.end;
        this.end.prev = this.start;
        this.cache = new Dictionary<int, Node>();
    }
    
    public void Add(Node node){
        var nextNode = start.next;
        start.next = node;
        node.prev = start;
        node.next = nextNode;
        nextNode.prev = node;
    }
    
    public void Remove(Node node){
        var prevNode = node.prev;
        var nextNode = node.next;
        prevNode.next = nextNode;
        nextNode.prev = prevNode;
    }
    
    public int Get(int key){
        if(cache.TryGetValue(key, out var node)){
            Remove(node);
            Add(node);
            return node.val;
        }
        
        return -1;
    }
    
    public void Put(int key, int val){
        var node = new Node(key, val);
        Node removingNode = null;
        if(cache.ContainsKey(key)){
            removingNode = cache[key];
        }
        
        if(cache.Count >= capacity){
            removingNode = end.prev;
        }
        
        if(removingNode != null){
            Remove(removingNode);
            cache.Remove(removingNode.key);
        }
        Add(node);
        cache.Add(key, node);
        
        //Show();
    }
    
    public void Show(){
        Console.WriteLine("----");
        var copy = start;
        
        while(copy != null){
            Console.WriteLine($"{copy.key} -> {copy.val}");
            copy = copy.next;
        }
    }
}

public class Runner
{
    public static void Main(string[] args)
    {
        var lru = new LRU(2);
        lru.Put(1, 1);
        lru.Put(2, 2);
        Console.WriteLine(lru.Get(1));
        lru.Put(3, 3);
        Console.WriteLine(lru.Get(2));
        lru.Put(4, 4);
        Console.WriteLine(lru.Get(1));
        Console.WriteLine(lru.Get(3));
        Console.WriteLine(lru.Get(4));
    }
}

/*1
-1
-1
3
4*/