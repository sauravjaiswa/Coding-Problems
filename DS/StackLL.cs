// Online C# Editor for free
// Write, Edit and Run your C# code using C# Online Compiler
// Implement Stack using LL
// Push
// Pop
// Peek

using System;

public class HelloWorld
{
    public static void Main(string[] args)
    {
        var st = new Stack<int>();
        st.Push(1);
        st.Push(2);
        st.Push(3);
        Console.WriteLine("Count: " + st.Count());
        Console.WriteLine("Pop: " + st.Pop());
        Console.WriteLine("Count: " + st.Count());
        Console.WriteLine("Pop: " + st.Pop());
        Console.WriteLine("Count: " + st.Count());
        Console.WriteLine("Peek: " + st.Peek());
        Console.WriteLine("Count: " + st.Count());
        Console.WriteLine("Pop: " + st.Pop());
        Console.WriteLine("Count: " + st.Count());
        Console.WriteLine("Peek: " + st.Peek());
    }
}

public class Stack<T>
{
    private Node<T> head;
    private int cnt;
    
    public Stack()
    {
        head = null;
        cnt = 0;
    }
    
    public void Push(T val)
    {
        var node = new Node<T>(val);
        
        if(head == null)
        {
            head = node;
        }
        else
        {
            head.Next = node;
            node.Prev = head;
            head = node;
        }
        
        cnt++;
    }
    
    public T Pop()
    {
        if(head == null)
        {
            throw new Exception("No element found");
        }
        
        var removingVal = head.Value;
        
        if(head.Prev == null && head.Next == null)
        {
            head = null;
        }
        else
        {
            var temp = head;
            
            head.Prev.Next = null;
            head = head.Prev;
            temp = null;
        }
        
        cnt--;
        
        return removingVal;
    }
    
    public T Peek()
    {
        if(head == null)
        {
            throw new Exception("No element found");
        }
        
        return head.Value;
    }
    
    public int Count()
    {
        return cnt;
    }
}

public class Node<T>
{
    public T Value;
    public Node<T> Next;
    public Node<T> Prev;
    
    public Node(T val)
    {
        Value = val;
        Next = Prev = null;
    }
}