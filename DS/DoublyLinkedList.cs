// Online C# Editor for free
// Write, Edit and Run your C# code using C# Online Compiler

using System;

public class HelloWorld
{
    
    public static void Main(string[] args)
    {
        var linkedList = new LinkedList<int>();
        linkedList.AddLast(1);
        linkedList.AddLast(2);
        linkedList.AddLast(3);
        Console.WriteLine("Get First: " + linkedList.GetFirst());
        Console.WriteLine("Get Last: " + linkedList.GetLast());
        Console.WriteLine("Count: " + linkedList.Count());
        Console.WriteLine("Removed Elm: 3");
        linkedList.RemoveElement(3);
        // Console.WriteLine(linkedList.Contains(2));
        // Console.WriteLine(linkedList.Contains(3));
        // Console.WriteLine("Remove Fist: " + linkedList.RemoveFirst());
        // Console.WriteLine("Get First: " + linkedList.GetFirst());
        // Console.WriteLine("Get Last: " + linkedList.GetLast());
        Console.WriteLine("Count: " + linkedList.Count());
        Console.WriteLine("Remove Last: " + linkedList.RemoveLast());
        Console.WriteLine("Count: " + linkedList.Count());
        Console.WriteLine("Get First: " + linkedList.GetFirst());
        Console.WriteLine("Get Last: " + linkedList.GetLast());
        Console.WriteLine("Remove First: " + linkedList.RemoveFirst());
        Console.WriteLine("Count: " + linkedList.Count());
        Console.WriteLine("Get First: " + linkedList.GetFirst());
    }
}

public class LinkedList<T> where T : IComparable<T>
{
    private Node<T> start;
    private Node<T> end;
    private int count;
    
    public LinkedList()
    {
        this.start = this.end = null;
        this.count = 0;
    }
    
    public void AddFirst(T ele)
    {
        var newNode = new Node<T>(ele);
        
        if(start == null && end == null)
        {
            start = end = newNode;
            return;
        }
        
        newNode.Next = start;
        start.Prev = newNode;
        start = start.Prev;
        
        count++;
    }
    
    public void AddLast(T ele)
    {
        var newNode = new Node<T>(ele);
        
        if(start == null && end == null)
        {
            start = end = newNode;
            count++;
            return;
        }
        
        newNode.Prev = end;
        end.Next = newNode;
        end = end.Next;
        
        count++;
    }
    
    public T GetLast()
    {
        if(start == null && end == null)
        {
            throw new Exception("No elements");
        }
        
        return end.Ele;
    }
    
    public T GetFirst()
    {
        if(start == null && end == null)
        {
            throw new Exception("No elements");
        }
        
        return start.Ele;
    }
    
    public T RemoveLast()
    {
        if(start == null && end == null)
        {
            throw new Exception("No elements");
        }
        
        count--;
        var removingElement = end.Ele;
        
        if(start == end)
        {
            start = end = null;
            return removingElement;
        }
        
        end.Prev.Next = null;
        end = end.Prev;
        
        return removingElement;
    }
    
    public T RemoveFirst()
    {
        if(start == null && end == null)
        {
            throw new Exception("No elements");
        }
        
        count--;
        var removingElement = start.Ele;
        
        if(start == end)
        {
            start = end = null;
            return removingElement;
        }
        
        start.Next.Prev = null;
        start = start.Next;
        
        return removingElement;
    }
    
    public void RemoveElement(T ele)
    {
        if(start == null && end == null)
        {
            throw new Exception("No elements");
        }
        
        if(start.Ele.CompareTo(ele) == 0){
            RemoveFirst();
            return;
        }
        
        if(end.Ele.CompareTo(ele) == 0){
            RemoveLast();
            return;
        }
        
        count--;
        
        var copyStart = start;
        
        while(copyStart != null)
        {
            if(copyStart.Ele.CompareTo(ele) == 0)
            {
                copyStart.Prev.Next = copyStart.Next;
                copyStart.Next.Prev = copyStart.Prev;
                
                copyStart.Prev = copyStart.Next = null;
                
                return;
            }
            
            copyStart = copyStart.Next;
        }
    }
    
    public bool Contains(T ele)
    {
        if(start == null && end == null)
        {
            throw new Exception("No elements");
        }
        
        var copyStart = start;
        
        while(copyStart != null)
        {
            if(copyStart.Ele.CompareTo(ele) == 0)
            {
                return true;
            }
            
            copyStart = copyStart.Next;
        }
        
        return false;
    }
    
    public int Count()
    {
        return count;
    }
}

public class Node<T>
{
    public T Ele { get; set; }
    public Node<T> Next { get; set; }
    public Node<T> Prev { get; set; }
    
    public Node(T ele)
    {
        this.Ele = ele;
        this.Prev = this.Next = null;
    }
}